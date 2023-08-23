#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: input value
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
