�ַ�� / ������Ʈ / �ҽ�����: ch03 / prj12 / const.c
Ű���� const�� ����� ��� ����
v 1.0 2016.
* /

#include <stdio.h>

int main(void)
{
	//Ű���� const�� ��� �����
	const double RATE = 0.03;
	int desposit = 800000;

	//RATE = 0.032;
	printf("������: %f\n", RATE);
	printf("���� �ܰ�: %d\n", deposit);
	printf("���ھ�: %f\n", deposit * RATE);

	//���ڿ��� ������ ����
	char*str = "���� C��� �Թ���";
	char * const title = "������ C���";

	str = "�ֱ� ���� ���� C ��� �Թ���";

	printf("\n%s: %s\n", str, title);

	return 0;
}