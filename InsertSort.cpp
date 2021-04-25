// InsertSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void insert_sort(int* p,int n)
{
	int i,tmp,j;
	if (n > 2)
	{
		insert_sort(p, n - 1);

	}

		for (i = 0; i < n - 1; ++i)
		{
			if (p[i] < p[n - 1])continue;
			else
			{
				tmp = p[n - 1];
				for (j=n-1-i;j>0;--j)
				{
					p[i + j] = p[i+j-1];
				}
				p[i] = tmp;
			}

		}

}
int main()
{
	int  a[10] = {34,12,765,4,2,76,68,30,69,29},i=0;
	insert_sort(a,10);	
	printf("n=%d Results:",10);
	while (i < 10)
		printf("%d  ",a[i++]);
	printf("\n");
	getchar();
	return 0;
}

