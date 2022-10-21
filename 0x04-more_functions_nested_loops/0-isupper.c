#include "main.h"
/**
 *_isupper - check for uppercase character
 *@c : is parameter
 *
 * Return: 1 if upper or 0 if else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

