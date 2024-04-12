//	A
//	B A
//	C B A
//	D C B A
//	E D C B A


#include<stdio.h>

int main() 
{
    int i, j;
    char ch;

    for (i = 0, ch = 'A'; i < 5; i++, ch++) 
	{
        char temp = ch;
        for (j = 0; j <= i; j++) 
		{
            printf("%c ", temp--);
        }
        printf("\n");
    }

}

