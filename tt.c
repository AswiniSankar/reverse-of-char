#include<stdio.h>
#include<string.h>
int main()
{
  char str[30],achar[30],aint[30];
  int i,count1=0,count2=0;
  scanf("%s",str);
 
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]>='a' && str[i]<='z'||str[i]>='A' && str[i]<='Z')
     {achar[count1]=str[i];
      count1++;
     }
    else
   {aint[count2]=str[i];
    count2++;
   }
  }
 for(i=count1-1;i>=0;i--)
   printf("%c",achar[i]);
 //printf("\n");
 for(i=0;i<count2;i++)
   printf("%c",aint[i]);
 printf("\n");
 return 0;
}
