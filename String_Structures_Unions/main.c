#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[] = "Rohan Dhakad";
   char str1[100];
   //gets(str1);
   //scanf("%s", str1);
   fgets(str1, 100, stdin);
   puts(str1);
   printf("%s", str);
   return 0;
}
