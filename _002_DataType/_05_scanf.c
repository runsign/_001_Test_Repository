#include "stdio.h"

void main() {
	int rad;
	double pi = 3.14;

	printf("������ �Է� >> ");
	scanf_s("%d", &rad); /*&�� �޸𸮻󿡼��� �ּҸ� �ǹ��Ѵ�.*/

	printf("�������� %d�� ���� �ѷ��� %.2lf, ���̴� %.2lf�Դϴ�.", rad, rad*2*pi, rad*rad*pi);
}