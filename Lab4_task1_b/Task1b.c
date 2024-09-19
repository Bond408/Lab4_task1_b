#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d = 5e-12;
	printf("Введите символ\n");
	scanf_s("%c", &c);
	printf("Шестнадцатеричный код введенного символа равен %x\n", c);
	printf("Десятичный код введенного символа равен %d\n", c);





}