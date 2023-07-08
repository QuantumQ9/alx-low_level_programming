#include "main.h"
/**
 * _strcpy - function that copies a string
 * @src: source
 * @dest: destination
 * @n: int
 * root-codes
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
