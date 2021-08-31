#incluye<stdio.h>
#incluye<stdlib.h>

int  main ()
{
	int n=0,i=0,a=0,b=1,c=0;
	printf("Ingrese el numero: ");
    scanf ("%d", & n);
    interruptor (n)
{
    caso 0:
           printf("0");
           romper;
    caso 1:
           printf("0,1");
           romper;
    por defecto:
	        printf("0,1, ");
                para(i=2;i<= n;i++)
{
				c=a+b;
				printf("%d, " ,c);
				a = b;
				b = c;
}
    printf("\n");
    romper;
}
    return 0;
}
