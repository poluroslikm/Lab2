#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float L = 33, n = 3;

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("                                                                                  Делимое равно %+1.0f, делитель равен %+2.0f\nЧастное равно %+2.2f",n,L,n/L);
}