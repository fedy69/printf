#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct printf - struct for printf
 * @c: The character
 * @fun: The function associated
 */
typedef struct printf
{
	char c;
	int (*fun)(va_list);
} arr_of_p;

int p_char(va_list arg);
int p_string(va_list arg);
int p_percent(va_list arg);
int p_int(va_list arg);
int _putchar(char c);
int pick_function(const char s, va_list ap);
int _printf(const char *format, ...);
int p_binary(va_list arg);

#endif