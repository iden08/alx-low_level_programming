#include "main.h"

/**
 * _islower -checks if the character c is lower or uper
 * @c : the parameter of a function
 *
 * Return: 0 success
 */

int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

