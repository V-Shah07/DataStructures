# DataStructures

## How to run:

1. Clone this repository 
2. Go to the directory that you want this program in and type "git clone " followed by the "HTTPS" link you can find from the "Code" button
3. Enter the "DataStructures" folder using ```cd DataStructures```
4. Compile using this command: ```g++ -o DataStructures LinkedLists.cpp StacksQueues.cpp main.cpp```
5. In terminal, type: ```./DataStructures.exe``` to run

### Alternatively:
1. Download the files of this repository by zipping it, and then open that folder through file explorer
2. If you are on a linux based shell: ```g++ -o DataStructures LinkedLists.cpp StacksQueues.cpp main.cpp``` should compile and ```./DataStructures.exe``` should run it
3. If you are on windows: ```gcc LinkedLists.cpp StacksQueues.cpp main.cpp -o DataStructures.exe``` should compile and ```DataStructures.exe```

## How it works:

* Implements the stack(FILO) and queue(FIFO) data structures 
* It was made by having a class that provides methods to push, pop, enqueue, and dequeue
* On the low level, there is a structure called ```node```, that contains:
  - A void pointer to store any type of data(ints, doubles, chars, or even other structures)
  - A pointer to another ```node``` which points to the next element in the doubly linked list
  - A pointer to another ```node``` which points to the previous element in the doubly linked list 
* For simplicity, the driver code makes a stack and queue of integers
* It will ask you to push a certain amount of integers, pop a certain amount of integers, and then show you the stack
* Next, you enqueue a certain amount of integers, dequeue a certain amount of integers, and then show you the queue

