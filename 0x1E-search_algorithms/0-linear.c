#include "search_algos.h"

/**
 * linear_search - searches for a value in array of integers using the linear search.
 * @array: pointer to the first element.
 * @size: size of the array
 * @value: the target value.
 *
 * Return: the first index where the value is located.
 * 	   Else if the value is not present or array is NULL, -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
