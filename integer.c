
#include <stdio.h>

int main()
{
	int size = 9;/*Переменная типа int, под нее выделяется 2^sysbit, где
	sysbit - битность системы*/
	int sqr = size * size;
	short h = 1; /*Под переменную типа short выделяется меньше байт, чем
	под int*/
	long l= 922337203685477585;/*Под переменную этого типа выделяется 
	больше байт чем на int*/
	
	printf("%-15s %10d %5d\n", "Квадрат", sqr, size);
	printf("%-15s %10d %5d\n", "Половинка", size/2, size);
	printf("%-20s %10d\n", "Короткое", h);
	printf("%-20s %ld\n", "Длинное", l);//Для форматирования long пишем ld
}

