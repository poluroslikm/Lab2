#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float L = 33, n = 3;

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("                                                                                  ������� ����� %+1.0f, �������� ����� %+2.0f\n������� ����� %+2.2f",n,L,n/L);
}