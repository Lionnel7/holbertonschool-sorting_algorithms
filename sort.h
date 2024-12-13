 HEAD
#ifndef SORTING_H
#define SORTING_H

#include <stdio.h>

#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;
>>>>>>> 00a38ea69ec89aa79b34d221e8e0b0e64965ccc4

/**
 * struct listint_s - Doubly linked list node
 *
<<<<<<< HEAD
 * @n:Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next:Pointer to the next element of the list
=======
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
>>>>>>> 00a38ea69ec89aa79b34d221e8e0b0e64965ccc4
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

<<<<<<< HEAD
/* Print functions */
void print_array(const int *array,size_t size);
void print_list(const listint_t *list);

/* Print functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORTING_H */
=======

void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif
>>>>>>> 00a38ea69ec89aa79b34d221e8e0b0e64965ccc4
