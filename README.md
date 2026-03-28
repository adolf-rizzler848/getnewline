# getnewline
A custom C function to read a file descriptor line-by-line using dynamic memory allocation.


The goal of this project is to create a function that returns a line read from a file descriptor. Unlike scanf or fgets, this implementation:

    Reads incrementally: It processes the input one byte at a time to find the newline character (\n).

    Handles the Heap: It uses dynamic memory allocation to store strings of unknown lengths.

    Works with any Input: It can read from a file, a network socket, or standard input (keyboard).
