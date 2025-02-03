# Null Pointer Dereference Bug in C++

This repository demonstrates a common error in C++: dereferencing a null pointer.  The `bug.cpp` file contains the erroneous code, which attempts to write to a memory location that hasn't been allocated.  The `bugSolution.cpp` file provides a corrected version.

## Running the Code

To compile and run the buggy code:

```bash
 g++ bug.cpp -o bug
 ./bug
```

This will likely result in a segmentation fault.

To compile and run the corrected code:

```bash
 g++ bugSolution.cpp -o bugSolution
 ./bugSolution
```

## Understanding the Problem

Null pointer dereferencing occurs when a program tries to access the memory location pointed to by a pointer that currently holds the value `nullptr` (or `NULL` in older C++ code).  Since no memory has been allocated at this address, the attempt to access it leads to undefined behavior, most commonly a crash.