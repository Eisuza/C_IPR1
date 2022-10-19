#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
	char ptrM[256], ptrK[256];
	int lenM, lenK;
	do {
		printf("Enter M: \n");
		gets(ptrM);
		lenM = strlen(ptrM);
	} while (lenM == 0);
	do {
		printf("Enter K < M: \n");
		gets(ptrK);
		lenK = strlen(ptrK);
	} while (lenM <= lenK && lenK != 0);
	//printf("size of M: %d\n", lenM);
	//printf("size of K: %d\n", lenK);
	char ptrFlags[256];
	for (int i = 0; ptrK[i]; i++)
	{
		if (ptrK[i] != ' ')	//potencial error
			ptrFlags[ptrK[i]] = 1;
	}
	char ptrResult[256];
	int cnResult = 0;
	for (int i = 0; ptrM[i]; i++)
	{
		if (ptrFlags[ptrM[i]] != 1)
		{
			ptrResult[cnResult] = ptrM[i];
			cnResult++;
		}
	}
	ptrResult[cnResult] = '\0';
	printf("\nResult is: %s\n", ptrResult);
	return 0;
}