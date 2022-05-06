#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b:	unsigned int variable passed as function parameter
 *
 * Return: Returns value 98 on unsecessful termincation
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr != NULL)
		return (98);
}
