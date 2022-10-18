#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the character to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
