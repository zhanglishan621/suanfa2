// 7、回溯法生成(1.2,3.4}的所有排列。
#include <stdio.h>
#define N 4
void print_elems(int* a)
{
	int i;
	for (i = 1; i <= N;++i)
	{ 
		printf("%d ", a[i]);
    } 
}

void dfs(int step, int* a, int* book)
{
	if (step==N+1)
	{
		print_elems(a);
		printf("\n");
		return;
	}
	for (int i = 1; i <= N;++i)
	{
		if (*(book + i) == 0)
		{
			*(book + i) = 1;
			a[step] = i;
			dfs(step + 1, a, book);
			*(book + i) = 0;
		}
	}
}
 
int main(void)
{
	int a[N+1] = { 0 };
	int book[N+1] = { 0 };
	dfs(1, a, book);
	return 0;
} 
