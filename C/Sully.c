#include <stdio.h>
#include <stdlib.h>
//asprintf bro
int main()
{
	int i;
	char *new_file;
	FILE *file;

	i = 5;
	new_file = malloc(sizeof(char) * 9);
	if(!new_file)
		return -1;
	new_file = "Sully_x.c";
	file = fopen(new_file, "w");
	if(!new_file)
		return(-1);
	char *a = "test";
	fprintf(file, a, 9, 10, 34, a);
	fclose(file);
	free(new_file);
	return (0);
}
