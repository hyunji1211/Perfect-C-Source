/*
�ַ�� / ������Ʈ / �ҽ�����: Ch4 / Prj01 / macro.c
#define�� �̿��Ͽ� ���� �̸��� �ٿ��� ��ũ�� ����� ����
V 1.0 2016.
*/

#include <stdio.h>

#define   KPOP 50000000
#define   PI 3.14
#define   PRT printf("��ũ�� ��� ���� ����\n")

int main(void)
{
	double radius = 2.83;

	printf("�ѱ��α�: %d��\n", KPOP);
	printf("�� ����: %f\n", radius * radius * PI);
	PRT;

	return 0;
}