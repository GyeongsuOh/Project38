#include <stdio.h>

int main() 
{
	int x, y, dump, num = 0;

	do {
		printf(" ��ȯ�� �� ������ �Է��ϼ���. >> ");
		scanf_s("%d %d", &x, &y);
		printf("�Է��� �� �� : x  = %d and y  = %d\n", x, y);

		printf("�ӽ� ���� ��� �̿� ���[1]\n");
		printf("������ �������� ��ȯ ���[2]\n"); 
		printf("������ ���������� ��ȯ ���[3]\n");
		printf("XOR ������ ^  �̿� ���[4]\n");

		printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
		scanf_s("%d", &num);
		if (num == 1) {
			dump = x;
			x = y;
			y = dump;
		}
		else if (num == 2) {
			x = x + y;
			y = x - y;
			x = x - y;
		}
		else if (num == 3) {
			x = x * y;
			y = x / y;
			x = x / y;
		}
		else if (num == 4) {
			x = x ^ y;
			y = x ^ y;
			x = x ^ y;
		}
		printf("��ȯ�� �μ� x=%d and y=%d", x, y);
	} 
	while (1);
}