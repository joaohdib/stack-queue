# stack-queue
# Stack and Queue in C

This college project implements two data structures, **Stack** and **Queue**, using linked lists in C. The project includes functions to create, insert, remove, and display elements of these data structures.

## Data Structures

### Stack
The stack is a **Last In, First Out (LIFO)** data structure. The implementation uses a linked list where elements are added and removed from the top of the stack.

### Queue
The queue is a **First In, First Out (FIFO)** data structure. The implementation uses a linked list where elements are added at the end of the queue and removed from the front.

## Features

### Stack
- **createStack**: Creates a new stack.
- **pushStack**: Adds a new element to the top of the stack.
- **popStack**: Removes the element from the top of the stack.
- **displayStack**: Displays all elements of the stack.
- **freeStack**: Frees all memory allocated for the stack.

### Queue
- **createQueue**: Creates a new queue.
- **enqueueQueue**: Adds a new element to the end of the queue.
- **dequeueQueue**: Removes the element from the front of the queue.
- **displayQueue**: Displays all elements of the queue.
- **freeQueue**: Frees all memory allocated for the queue.

## Compilation and Execution

To compile and run the project, follow these steps:

1. **Compile the code**:
   ``` gcc -o stack_queue main.c ```

2. **Run the program**:
   ``` ./stack_queue ```

## Code

The source code for the project is in the `main.c` file. Below is a summary of the main functions and their responsibilities:

- **createQueue()**: Initializes a new queue with `front` and `rear` set to `NULL`.
- **enqueueQueue(int num, Queue* q)**: Inserts a new element at the end of the queue.
- **dequeueQueue(Queue* q)**: Removes the element from the front of the queue.
- **displayQueue(Queue* q)**: Displays all elements of the queue.
- **freeQueue(Queue* q)**: Frees the memory allocated for the queue.

- **createStack()**: Initializes a new stack with `top` set to `NULL`.
- **pushStack(int num, Stack* s)**: Adds a new element to the top of the stack.
- **popStack(Stack* s)**: Removes the element from the top of the stack.
- **displayStack(Stack* s)**: Displays all elements of the stack.
- **freeStack(Stack* s)**: Frees the memory allocated for the stack.

## Examples

The code in `main` demonstrates how to use the functions to add and remove elements from the data structures, as well as to display the current state of each structure.
