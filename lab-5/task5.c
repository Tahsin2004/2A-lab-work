#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], nstr[100];
    gets(str);
    // puts(str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
        {
            for(int j=0; j<=i; j++)
                {
                    printf("%c", str[j]);
                }
            printf("\n");
        }
}