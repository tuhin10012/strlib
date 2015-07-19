#ifndef _strlib_h
#define _strlib_h

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

//void function();

#endif
