#include "main.h"

/**
 * binary_to_uint - Function to convert a binary number to an unsigned int
 * @b: Is pointing to a string of 0 and 1 chars
 * Return: Converted value, 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d_val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		d_val <<= 1;
		d_val += b[i] - '0';
		i++;
	}
	return (d_val);
}
