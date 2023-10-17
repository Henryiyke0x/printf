#include "main.h"
/**
 * writing a function that prints a string
 * return 1 on success
 */
int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (1 = 0; i < length ; i++ )
			_putchar(str[1]);
		return(length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i< length; 1++)
			_putchar(str[1]);
		return(length);
	}
