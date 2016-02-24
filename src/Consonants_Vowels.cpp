/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include<stdio.h>
#include <stddef.h>
int length(char * str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
    }
    return i;

}
int vowel(char str)
{
    if(str=='a' || str=='e' || str=='i' || str=='o' || str=='u' || str=='A' || str=='E' || str=='I' || str=='O' || str=='U')
        return 1;
    else return 0;
}
void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
        (*consonants)=0;
        (*vowels)=0;
        if(str==NULL)
            return;
        int len=length(str),i;
        //printf("%d",len);
        if(len==0)
            return;
        for(i=0;i<len;i++)
        {
            //printf("\n%c\n",str[i]);
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            {
                if(vowel(str[i]))
                {
                   // printf("\n%c\n",str[i]);
                    (*vowels)++;
                }
                else (*consonants)++;
            }
        }
       // printf("\n%d   %d",consonants,vowels);

}
