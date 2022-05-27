#include "main.h"

/**
 * binary_to_unit - Function to convert a binary number to an unsigned int
 * @b: Is pointing to a string of 0 and 1 chars
 * Return: Converted value, 0
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
