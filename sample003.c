#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=13;	int x;
	if (x=(i=5)){printf("%d\n", x);}
	if(i=(5 || (i=i+3)))	printf("%d\n", i);
	return 0;
}