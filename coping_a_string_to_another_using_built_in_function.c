#include<stdio.h>
int main()
{   int i;
    char str1[]="isha negi";
    char str2[sizeof(str1)];
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
        
    }
    str2[i]='\0';
          printf("%s",str2);
}
