#include "main.h"

/**
 * _isalpha - chects for character alphabet
 * @c: the character to be checked
 * Return: 1 if character is lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0)


}
