
#include<stdio.h>

void bubblesort(int* arr , int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	//ÌËÊı
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print(int* arr , int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", sz);
	bubblesort(arr , sz);
	print(arr , sz);
	return 0;
}