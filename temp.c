#include<stdio.h>
#include<stdlib.h>
int main()
{
     char str[]="hello world";
     char str1[11],str3[11];
//     char str2[11]=str[];
     int i,len=strlen(str);
     for(i=0;i<len;i++)
     {
                       str1[i]=str[i]&127;
                       str3[i]=str[i]^127;
                       printf("%c/n%c",str1[i],str3[i]);
                       }
                       return 0;
}
