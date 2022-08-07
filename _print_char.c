#include "main.h"
#include <stdarg.h>

/**
 * _print_char - prints characters
 * @args: The argument
 *
 * Return: The number of characters that were printed
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
