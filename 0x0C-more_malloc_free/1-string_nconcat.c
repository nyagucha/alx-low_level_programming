#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to attach to
 * @s2: string to link to
 * @n: the number of bytes from s2 to attach to s1
 * Return: a pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = 0, k = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	if (n < leng2)
		s = malloc(sizeof(char) * (leng1 + n + 1));
	else
		s = malloc(sizeof(char) * (leng1 + leng2 + 1));

	if (!s)
		return (NULL);

	while (j < leng1)
	{
		s[j] = s1[j];
		j++;
	}

	while (n < leng2 && j < (leng1 + n))
		s[j++] = s2[k++];

	while (n >= leng2 && j < (leng1 + leng2))
		s[j++] = s2[k++];

	s[j] = '\0';

	return (s);
}
