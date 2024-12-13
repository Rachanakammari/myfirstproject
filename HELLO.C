#include<stdio.h>
#include<conio.h>
int main()
{
char str[15]={'h','e','l','l','o',',','w','o','r','l','d'};
int i;
printf("/n the actual string is %s",str);
printf("/n the string after xor each character with o is");
for(i=0;i<11;i++)
printf("%c",str[i]^0);
getch();
}