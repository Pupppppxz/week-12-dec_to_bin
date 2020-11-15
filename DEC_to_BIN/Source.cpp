#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct pupzz
{
	int i = 0;
}zz;

void covertBin(int dec)
{
	
	static int numBin[128];
	while (dec != 0)
	{
		numBin[zz.i] = dec % 2;
		dec /= 2;
		zz.i++;
	}
	for (zz.i; zz.i >= 0; zz.i--)
	{
		printf("%d", numBin[zz.i]);
	}
}

int main()
{
	int numDec;
	printf("Enter positive integer : ");
	scanf("%d", &numDec);
	covertBin(numDec);

	return 0;
}