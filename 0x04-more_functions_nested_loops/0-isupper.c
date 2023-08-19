#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 *Returns 1 if c is uppercase
 *Returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
