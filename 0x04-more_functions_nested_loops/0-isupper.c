#include "main.h"

/**
 *_isupper - check for uppercase character
 *@c : is parameter
 *
 * Return: 0 success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

