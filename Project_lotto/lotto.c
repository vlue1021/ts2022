#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand());
		//rand() : 랜덤값을 리턴해주는 함수
	}
	return 0;
}