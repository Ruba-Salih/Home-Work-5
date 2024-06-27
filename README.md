
![logo](images.png)

# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C. Each sorting algorithm is implemented in a separate C file and is tested with example arrays or linked lists.

## Table of Contents

- [Bubble Sort](#bubble-sort)
- [Insertion Sort](#insertion-sort)
- [Selection Sort](#selection-sort)
- [Quick Sort](#quick-sort)

## General Requirements

- Code is written in C language.
- All code is compiled on Ubuntu 20.04 LTS using gcc.
- The code follows the Betty style.
- Global variables are not allowed.
- Each C file contains no more than 5 functions.
- The standard library is not used unless specified otherwise.
- Header files are included with include guards.
- A README.md file is included at the root of the project folder.
- All header files contain prototypes of functions.
- List and array sizes less than 2 are not sorted.
- There is one project repository per group.

## Sorting Algorithms

### Bubble Sort

- Prototype: `void bubble_sort(int *array, size_t size);`
- Sorts an array of integers in ascending order using the Bubble sort algorithm.
- Prints the array after each swap.

### Insertion Sort

- Prototype: `void insertion_sort_list(listint_t **list);`
- Sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.
- Prints the list after each swap.

### Selection Sort

- Prototype: `void selection_sort(int *array, size_t size);`
- Sorts an array of integers in ascending order using the Selection sort algorithm.
- Prints the array after each swap.

### Quick Sort

- Prototype: `void quick_sort(int *array, size_t size);`
- Sorts an array of integers in ascending order using the Quick sort algorithm with the Lomuto partition scheme.
- Prints the array after each swap.

## Big O Notations

For each sorting algorithm, the time complexity in the best case, average case, and worst case is provided in separate files named `0-O`, `1-O`, `2-O`, and `3-O`, respectively.

## Usage

To test each sorting algorithm, compile the corresponding C files along with the main file and execute the compiled program.

For example:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble_sort
./bubble_sort

### Authors
Ruba Salih Adam
Riham Abdelfatah Awad