#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
	{
	FILE *fp;
	char str [80];
	/* Writing to File JAK */
	if ((fp = fopen("jak", "w+")) == NULL)
	{
	 printf ("Cannot open file \n\n");
	 exit(1);
	}
	do
	{
	 printf ("Enter a string (CR to quit): \n");
	 gets (str);
	 if(*str != '\n')
	 { strcat (str, "\n"); /* add a new line */
	 fputs (str, fp);
	 }
	 } while (*str != '\n');
	/*Reading from File JAK */
	printf ("\n\n Displaying Contents of File JAK\n\n");
	rewind (fp);
	while (!feof(fp))
	{
	 fgets (str, 81, fp);
	 printf ("\n%s", str);
	}
	fclose(fp);
	}

