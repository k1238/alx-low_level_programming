#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accepted[b])
		{
			
			if (s[a] == accepted[b])
			{
				s += a;
				return (s);
			}
		b++;
	}
		a++;
	}

	return ('\0');
}
	
	








