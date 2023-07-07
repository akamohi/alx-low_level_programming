#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert to a binary number to an unsigned int
 * @b: char string only
 * Return: converted decimal number or 0 if there is an unconvertable char and return
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int totalone, powerone;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (powerone = 1, totalone = 0, len--; len >= 0; len--, powerone *= 2)
	{
		if (b[len] == '1')
			totalone += powerone;
	}

	return (totalone);
}
