/**
  *chk_spicifier - check a spicifier and assign a function
  *@format: specifier
  *
  *Return: pointor to function
  */
int (*chk_specifier(char*))(va_list)
{
	int i;

	func_t my_array[3] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_cent},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (my_array[i] == *format)
		{
			return (my_array[i].f);
		}

	}
	return (NULL);

}
