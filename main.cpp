#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void massive_filler(int mas[], int a)
{
	for(int i=0; i<a; i++)
	{
 		mas[i]=rand();
 	}	
 	for(int i=0; i<a; i++)
 	{
 		printf("\n%i\n", mas[i]);
	}
}




int main() 
{
	srand(time(NULL));
	
	int mas1[100];
	int mas2[100];
	int n, m;
	
	printf("VVedite kol-vo elementov pervogo massiva");
	scanf("%i", &n);
	printf("VVedite kol-vo elementov vtorigo massiva");
	scanf("%i", &m);
	
	massive_filler(mas1, n);
	massive_filler(mas2, m);
	
	return 1;
}
