// file: relation.c

#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);
	printf("m=%d result=%d\n", m, result);

	return 0;
}