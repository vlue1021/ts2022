#include <stdio.h>
#define PI 3.141592
//PI ��ȣ���
int main()
{
	printf("%f\n", PI);
	//CTRL + F7 : compile
	//CTRL + b : build
	//CTRL + F5 : ����
	int r = 5; //radius
	printf("���� ���� : %f\n", PI * r * r);
	printf("���� �ѷ� : %f\n", PI * 2 * r);
	printf("���� ���� : %.2f\n", (4.0 / 3.0) * PI * r * r * r );
	return 0;
}