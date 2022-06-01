#include<stdio.h>

int gold(int crdtls [3][2], int ID, int PIN)
{
    int gold = 0;
    for(int i = 0; i<3; i++){
        if(ID == crdtls[i][0] && PIN == crdtls[i][1]){
        gold = 1;
        }
    }
    return gold;
}

int main ()
{
    int crdtls[3][2] = {{11111,1111}, {22222,2222}, {33333,3333}};
    int ID, PIN;
    
    printf("Enter ID Number: \n");
    scanf("%d", &ID);
    
    printf("Enter PIN: \n");
    scanf("%d", &PIN);
    
    if(gold(crdtls,ID,PIN))
    {
        printf("You have successfully logged in!'");
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}