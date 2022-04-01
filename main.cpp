#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StacksQueues.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#pragma warning(disable:4996)

int pushInt(Stack* s, int num)
{
	int* value = (int*)malloc(sizeof(int));
	*value = num;
	return *(int*)(((*s).push(value))->token);
}
int enqueueInt(Queue* q, int num)
{
	int* value = (int*)malloc(sizeof(int));
	*value = num;
	return *(int*)(((*q).enqueue(value))->token);
}
int main()
{
	Stack s(sizeof(int));
	Queue q(sizeof(int));
	int num;
	int num2;
	int temp;
	printf("How many items would you like to push onto the stack?: ");
	scanf("%d", &num);


	for (int i = 1; i <= num; ++i)
	{
		temp = pushInt(&s, i);
		printf("Pushed %d on to the stack\n", temp);
#ifdef _WIN32
		Sleep(700);
#else
		usleep(700000);
#endif
	}
	do
	{
		printf("How many items would you like to pop off the stack?(it should be less than the amount that you pushed on to it): ");
		scanf("%d", &num2);
	} while (num2 > num);
	for (int i = 0; i < num2; ++i)
	{
		temp = (*(int*)(s.pop()->token));
		printf("Poppped %d from the stack\n", temp);
#ifdef _WIN32
		Sleep(700);
#else
		usleep(700000);
#endif
	}
	printf("\nThe stack from bottom to top is now: \n");
	for (int i = 0; i < s.getNumNodes(); ++i)
	{
		printf("%d  ", *((int*)s.valueAt(i)));
	}
	printf("\n\n");
#ifdef _WIN32
	Sleep(2000);
#else
	usleep(2000000);
#endif
	printf("How many items would you like to equeue onto the queue?: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; ++i)
	{
		temp = enqueueInt(&q, i);
		printf("Enqueued %d on to the queue\n", temp);
#ifdef _WIN32
		Sleep(700);
#else
		usleep(700000);
#endif
	}
	do
	{
		printf("How many items would you like to dequeue from the queue?(it should be less than the amount that you pushed on to it): ");
		scanf("%d", &num2);
	} while (num2 > num);
	for (int i = 0; i < num2; ++i)
	{
		temp = (*(int*)(q.dequeue()->token));
		printf("Dequeued %d from the queue\n", temp);
#ifdef _WIN32
		Sleep(700);
#else
		usleep(700000);
#endif
	}
	printf("\nThe queue from bottom to top is now: \n");
	for (int i = 0; i < q.getNumNodes(); ++i)
	{
		printf("%d  ", *((int*)q.valueAt(i)));
	}
	printf("\n\n");
#ifdef _WIN32
	Sleep(2000);
#else
	usleep(2000000);
#endif
}