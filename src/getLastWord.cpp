/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include<stdio.h>
#include <stdlib.h>
char vals[50];
int lenfind(char *str){
int i;
for(i=0;str[i]!='\0';i++){}
return i;
}
char * get_last_word(char * str){
    if(str==NULL)
        return NULL;
    int len=lenfind(str);
    //printf("%d",len);
    int i=len-1,j=0,k,c=0;
    if(str[i]==' ')
    {   i--;
        while(str[i]==' ')
        {
            i--;
            if(i==-1){
                return NULL;
            }
        }
    }

    for(j=i;j>=0;j--){
        if(str[j]==' ')
            break;
    }
    //printf("\n%d %d",i,j);
    for(k=j+1;k<=i;k++)
    {
        vals[c]=str[k];
        c++;
    }
    vals[c]='\0';
    //printf("%s",vals);
	return vals;
}
int main()
{
    char str[50]="he he";
    char *ptr;
    ptr=get_last_word(str);
    printf("%s",ptr);
}
