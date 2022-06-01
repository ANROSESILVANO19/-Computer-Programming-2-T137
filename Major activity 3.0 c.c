#include <stdio.h>
#include <string.h>
  
int main()
{
    char str[200];
    int k, c, len, startIndex, endIndex;
  
    printf("\n Please Enter any String :  ");
    gets(str);
     
    len = strlen(str);
    endIndex = len - 1;
     
    printf("\n *** String the are givin in Reverse Order *** \n");        
    for(k = len - 1; k >= 0; k--)
    {
        if(str[k] == ' ' || k == 0)
        {
            if(k == 0)
            {
                startIndex = 0;
            }
            else
            {
                startIndex = k + 1;
            }
            for(c = startIndex; c <= endIndex; c++)
            {
                printf("%c", str[c]);
            }
            endIndex = k - 1;
            printf(" ");                
        } 
    }
     
    return 0;
}