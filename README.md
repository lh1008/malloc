# 0x0B. C - malloc

### Learning Objectives

- What is a program break
- How to play with a program break in order to allocate memory dynamically
- How the glibc `malloc` and `free` functions work
- What is ASLR
- What is memory alignment
- What is a memory page
- How to encapsulate the memory management in order to hide it from the user

#### man or help

- `sbrk`
- `brk`
- `malloc`

### Tasks

_**0. Naive malloc**_
Build the naive malloc that is presented in the concept page.

- Prototype: `void *naive_malloc(size_t size);`

_**1. malloc**_
Write you own `malloc` function that allocates space in the heap

- Prototype: `void *_malloc(size_t size);`

_**2. free**_
Write you own `free` function that frees a memory space

- Prototype: `void _free(void *ptr);`
