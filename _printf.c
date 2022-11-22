#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_printf - funciton that mimics printf from stdio
  *@format: string to print 
  *@...: variadic parameters
  *
  *Return: number of printed characters
  */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;

	while(format[i])
	{
		value = write(1,&format[i],1);
		count = count + valuie;
		i++;
	}
	return (count);
}
