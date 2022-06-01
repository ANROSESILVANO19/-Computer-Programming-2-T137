#include <stdio.h>
#include <stdlib.h>

int main(){
    char line[300];
    int i, lines;
    FILE*fptr;
    
    fptr=fopen("text.txt","w");
    if(fptr==NULL){
        printf("Error");
    }
    printf("Input how many lines to be appended: ");
    scanf("%d", &lines);
    
    if(lines<=5){
        for(int i=0; i<5; i++){
            scanf("%s", &line);
            fprintf(fptr,"%s\n", line);
        }
        fclose(fptr);
    }
    else
    printf("limit to only 5");
}