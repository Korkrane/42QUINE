#include <stdio.h>

/*
	This is a comment
*/

#define FT(x)int main(){ FILE *file=fopen(FILE_NAME, "w"); if (!file) return (-1); fprintf(file, CONTENT, 10, 34, CONTENT, 9); fclose(file); return (0); }
#define FILE_NAME "Grace_kid.c"
#define CONTENT "#include <stdio.h>%1$c%1$c/*%1$c%4$cThis is a comment%1$c*/%1$c%1$c#define FT(x)int main(){ FILE *file=fopen(FILE_NAME, %2$cw%2$c); if (!file) return (-1); fprintf(file, CONTENT, 10, 34, CONTENT, 9); fclose(file); return (0); }%1$c#define FILE_NAME %2$cGrace_kid.c%2$c%1$c#define CONTENT %2$c%3$s%2$c%1$c%1$cFT(xxxxxxxx)%1$c"

FT(xxxxxxxx)
