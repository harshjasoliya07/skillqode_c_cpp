#include <stdio.h>
int main()
{
    FILE *fp;
    char ghanu[12];
    fp = fopen("C:/Windows/System32/cmd.text", "w+");
    while (fscanf(fp, "%s", ghanu) != EOF)
        ;
    {
        printf("%s", ghanu);
    } 
    fclose(fp);
}