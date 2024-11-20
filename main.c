//请在下方输入你的代码：
//正三角
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-4d", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
//倒三角
