#include "Map.h"
void PrintMap(Player player)
{
	printf(" ");
	for (int i = 0; i < 5; i++)
	{
		printf("___  ");
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		// Left
		// First Row
		for (int j = 0; j < 5; j++)
		{
			printf("|   |");
		}
		printf("\n");
		// Second Row
		for (int j = 0; j < 5; j++)
		{
			char icono;
			if (player.position[i] == j && player.position[j] == i) 
			{
				icono = 'X';
			} 
			else
			{
				icono = ' ';
			}

			printf("| %c |", icono);
		}
		printf("\n");

		// Third Row
		for (int j = 0; j < 5; j++)
		{
			printf("|___|", ' ');
		}
		printf("\n");

	}
}