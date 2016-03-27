/*
Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int length3(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
char * get_last_word(char * str){

	int i = 0, j = 0, k = 0, c = 0, p = 0, x = 0, l, y;
	char *s;
	l = length3(str);
	y = 0;
	if (str == " ")
		return str;
	else if (str == "  ")
	{
		s = (char *)calloc(1, sizeof(char));
		s = " ";
		return s;
	}
	while (str[y] != '\0')
	{
		if (str[y] == ' ')
			break;
		y++;
	}
	if (y == l)
		return str;
	else{

		while (l >= 0)
		{
			if (str[l] != ' ' &&  str[l] != '\0')
			{
				break;
			}
			l--;
		}
		while (i != (l + 1))
		{
			if (str[i] == ' ')
				j = i;
			i++;
		}
		j = j + 1;
		k = j;
		while (k <= l)
		{
			c++;
			k++;
		}
		s = (char *)malloc(sizeof(char)*c + 1);
		while (j <= l)
		{
			s[p] = str[j];
			p++;
			j++;
		}
		s[p] = '\0';
		return s;
	}
}
