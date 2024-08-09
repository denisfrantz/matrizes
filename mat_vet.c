#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3], i, j;
	int vetor[9], x;
	int num;
	
	printf ("MATRIZ\n======\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("Elemento a%d%d: ", i + 1, j + 1);
			scanf ("%d", &matriz[i][j]);
		}
		printf ("\n");
	}
	system ("cls");
	printf ("MATRIZ\n======\n");
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("%d ", matriz[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\nMATRIZ x ");
	scanf ("%d",&num);
	printf ("\nVETOR\n=====\n");
	x = 0;
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (x < 9)
			{
				printf ("%d ", matriz[i][j]*num);
				x++;
			}
		}
	}
	getch ();
	
	return 0;
}
