#ifndef  _MAIN_H_

#define _MAIN_H_

#include <stdarg.h>
/**
 * this struct prints - vstructures for printing different typres
 * @t: this type to print
 * @p: this refers to the function to print
 * thats all
 */

typedef struct print{
	char *t;

	int(*f)(va_list);

}print_t;

int _printf(const char *format, ...);
int _printf_strind(va_list val)
int _putchar(char c);

int _printf( const char *format, ....);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_u(va_list u);
int print_R(va_list R);
int print_d(va_list d);
int print_o(va_list o);
int print_b(va_list b);
int print_X(va_list X);
int print_x(va_list x);
int print_r(va_list r);
int print_S(va_list S);
int print_p(va_list p);


#endif
