#include <stdio.h> // 표준 입출력 헤더 파일
#include <limits.h>
#define CHAR_MIN -128
#define CHAR_MAX 127

int main()
{
	printf("%d에서 %d\n", CHAR_MIN, CHAR_MAX);
	char c = 127;
	printf("%d\n", c);
	c = c + 1;
	printf("%d\n", c);
	printf("%d에서 %d\n", INT_MIN, INT_MAX);
	ctrl+shift+/
	ctrl+f7 : compile
	ctrl+b : build
	ctrl+f5 : 실행
	return 0;
}

int main()
{
	float a;
	double b;
	a = 3.14159;
	b = 1.79e+308;
	printf("%f\n", a);
	printf("%e\n", b);
	return 0;
}