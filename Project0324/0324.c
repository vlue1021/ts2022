#include <stdio.h>
#define PI 3.141592
//PI 기호상수
int main()
{
	printf("%f\n", PI);
	//CTRL + F7 : compile
	//CTRL + b : build
	//CTRL + F5 : 실행
	int r = 5; //radius
	printf("원의 면적 : %f\n", PI * r * r);
	printf("원의 둘레 : %f\n", PI * 2 * r);
	printf("구의 부피 : %.2f\n", (4.0 / 3.0) * PI * r * r * r );
	return 0;
}