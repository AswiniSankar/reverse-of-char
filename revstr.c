/*
aswini
a1i2n1s1w1
*/
#include<stdio.h>
#include<string.h>
void letter_count(char*);
int main()
{
  char s[20];
  scanf("%s",s);
  letter_count(s);
  printf("\n");
  return 0;
}
void letter_count(char string[])
{
  int count[26]={0},temp,i,lenght;
  lenght=strlen(string);
  for(i=0;i<lenght;i++)
  {
     if(string[i]>='a' && string[i]<='z')
     { temp=string[i]-'a';
       count[temp]++;
     }
  }
  for(i=0;i<26;i++)
  {if(count[i]!=0)
   printf("%c%d",i+97,count[i]);
  }
}

