#include <stdio.h>

void do_nothing()
{
	return ;
}

/*
	This is the main function
*/

int main()
{
	/*
		This is a comment
	*/
	char *a="#include <stdio.h>%2$c%2$cvoid do_nothing()%2$c{%2$c%1$creturn ;%2$c}%2$c%2$c/*%2$c%1$cThis is the main function%2$c*/%2$c%2$cint main()%2$c{%2$c%1$c/*%2$c%1$c%1$cThis is a comment%2$c%1$c*/%2$c%1$cchar *a=%3$c%4$s%3$c;%2$c%1$cprintf(a, 9, 10, 34, a);%2$c%1$cdo_nothing();%2$c%1$creturn(0);%2$c}%2$c";
	printf(a, 9, 10, 34, a);
	do_nothing();
	return(0);
}
