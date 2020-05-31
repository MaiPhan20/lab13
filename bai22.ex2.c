#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main ()
	{
	FILE *fp;
	double d = 23.31 ;
	int i = 13;
	long li = 1234567L;
	if ((fp = fopen ("jak", "wb+")) == NULL )
	{
	printf("Cannot open file ");
	exit(1);
	}
	fwrite (&d, sizeof(double), 1, fp);
	fwrite (&i, sizeof(int), 1, fp);
	fwrite (&li, sizeof(long), 1,fp);
	fclose (fp);
	if ((fp = fopen ("jak", "rb+")) == NULL )
	{
	printf("Cannot open file");
	exit(1);
	}
	fread (&d, sizeof(double), 1, fp);
	fread(&i, sizeof(int), 1, fp);
	fread (&li, sizeof(long), 1, fp);
	printf ("%f %d %ld", d, i, li);
	fclose (fp);
}
