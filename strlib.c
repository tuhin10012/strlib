/* String Library Enabling Special Operations On Strings For C Language */
/* 0 Is Assumed As Starting Index */
/* All Operations Are Performed On The Original String Itself */

/* Header Files */
#include<stdio.h>
#include<limits.h>
#include "strlib.h"

/*Library Functions*/
void substrings(char arr[], int n); // Function To Print All Possible Substrings Of A Given String
void storesubstr(char arr[],int n); // Function To Store All Possible Substrings Of A Given String In A Specified Array 
void substr(char arr[],int start,int end); // Function To Display Characters From The Starting Index To End Index Of A String
void strasc(char arr[],int n); // Function To Sort The Characters Of A Given String In Ascending Order
int length(char arr[]); // Function Returns The Length Of The String
void strrev(char arr[],int n); // Function To Reverse A String
void strlwrcase(char arr[],int n); // Function To Convert All Characters Of A String To Lower Case
void struprcase(char arr[],int n); // Function To Convert All Characters Of A String To Upper Case
char *stripDuplicates(const char *src, char *target); // Function To Create New String Consisting Of All Distinct Characters From An Existing String

// Function A
char *stripDuplicates(const char *src, char *target)
{
  int lookup[SCHAR_MAX] = {0}; 
  char *t = target; // save original pointer to return
  while(*src != 0)
  {
    if (!lookup[*src])
    {
      *t++ = *src;
      lookup[*src] = 1;
    }
    src++;
  }
  *t++ = 0;
  return target;
}


// Function B
void struprcase(char arr[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {    
 if(arr[i]<='z' && arr[i]>='a')
  arr[i]=arr[i]-32;    
 }   
     
     
     
}

// Function C
void strlwrcase(char arr[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {    
 if(arr[i]<='Z' && arr[i]>='A')
  arr[i]=arr[i]+32;    
 }   
}


// Function D
void strrev(char arr[],int n)
{
 int i,j;
 char ch;
 for(i=0,j=n-1;i<n/2;i++,j--)
 {
    ch=arr[i];
    arr[i]=arr[j];
    arr[j]=ch;                    
 }                           
     
}

// Function E
int length(char arr[])
{
 int i;
 for(i=0;arr[i]!='\0';i++)    
   {}
   return i;  
     
     
}

// Function F
void strasc(char arr[],int n)
{
 char ch,output[100];
 int no[26]={0};
 int c,t,x;
 int i; 
  for (c = 0; c < n; c++)
   {
      ch = arr[c] - 'a';
      no[ch]++;
   }
 
   t = 0;  
   
   for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';
 
      for (c = 0; c < no[x]; c++)
      {
         output[t] = ch;
         t++;
      }
   }
   output[t] = '\0';
 
   for(i=0;i<n;i++)
   arr[i]=output[i];
     
     
     
}



// Function G

void substr(char arr[], int start, int end)
{
    int i;
    for(i=start;i<=end;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}

// Function H

void substrings(char arr[], int n)
{
    int pass,j,start,end;
    int no_of_strings = n-1;

    for(pass=0;pass<n;pass++)
    {
        start = 0;
        end = start+pass;
        for(j=no_of_strings;j>=0;j--)
        {
            substr(arr,start, end);
            start++;
            end = start+pass;
        }
        no_of_strings--;
    }

}

// End Of Library
