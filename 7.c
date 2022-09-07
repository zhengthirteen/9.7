#include<stdio.h>
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,23 };
	int a = 6;
	long long b = 0;
	double c = 0;
	short d = 0;
	printf("%d\n", arr[9]);
	printf("%d\n", !a);
	printf("%d\n", -a);
	printf("%d\n", a<<1);
	printf("%d\n", a>>1);
	printf("%d\n", a>>2);
	printf("%d\n", a<<2);
	printf("%d\n", a--);
	printf("%d\n", a++);
	printf("%d\n", --a);
	printf("%d\n", ++a);

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof b);
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(d));
	printf("%d\n", sizeof(arr[2]));
	
	return 0;
}