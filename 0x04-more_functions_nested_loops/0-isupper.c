#include "main.h"

/**
 * _isupper - check  if a letter is upper.
 * @c: input character.
 * Return: 1 for  upper letter, 0 for any else.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
