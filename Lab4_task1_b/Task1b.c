#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d = 5e-12;
	printf("������� ������\n");
	scanf_s("%c", &c);
	printf("����������������� ��� ���������� ������� ����� %x\n", c);
	printf("���������� ��� ���������� ������� ����� %d\n", c);





}