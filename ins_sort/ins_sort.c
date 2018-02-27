#include <stdio.h> 

int main () {
	int i = 0;
	int j = 0;
	int temp = 0;
	int array_ent[] = {31, 41, 59, 26, 41, 58};

	printf ("%ld \n", sizeof(array_ent)/sizeof(int));

	for (i = 0; i > sizeof(array_ent)/sizeof(int) - 1; i++) {
		if (array_ent[i] < array_ent[i + 1]) { 
			int j = 0;
			j = i + 1; 
			temp = array_ent[j];

			printf ("====> temp = %d \n", temp);
			printf ("====> j = %d \n", j);

			while ((j > 0) && (temp < array_ent [j - 1])) {
				printf ("SWAP [%d]: arr_ent[%d] = %d, arr_ent[%d] = %d \n", j, j, array_ent[j], j-1, array_ent[j-1]);
				array_ent[j] = array_ent[j - 1]; 
				printf ("ARRAY_ENT[%d] = %d \n", j, array_ent[j]);
				j--;

				printf("j-- = %d \n", j);
			}
			array_ent[j] = temp;
			printf ("RES_SWP: arr_ent[%d] = %d \n", j, array_ent[j]);

		}

	}

	for (i = 0; i < sizeof(array_ent)/sizeof(int); i++) {
		printf ("%d ", array_ent[i]);
	}

	printf ("\n");


	return 0;

}
