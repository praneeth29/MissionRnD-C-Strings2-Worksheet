/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/
#include<stdio.h>
#include <stddef.h>
#include <stdlib.h>
        char val[100];
char * get_sub_string(char *str, int i, int j){
    if(i>j || str==NULL )
        return NULL;
    else
    {

        int l=i;
        while(str[l]!='\0' && l<=j)
        {
                val[l-i]=str[l];
                l++;
        }
        val[l]='\0';
        return val;
    }
}
