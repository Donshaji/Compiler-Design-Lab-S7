/* this is c program 
DFA to accept odd number of 0's and even number of 1's*/

#include <stdio.h>
int EE=0,OE=1,OO=2,EO=3;
int state=0;
char input;
int main(void){
    printf("Enter a string of 0's & 1's:");
    while(1){
        scanf("%c",&input);
        if(input==' ')
            break;
        if((input!='0')&&(input!='1'))
            break;
        if(state==0)
            state=(input=='1')?OE:EO;
        else if(state==1)
            state=(input=='1')?EE:OO;
        else if(state==2)
            state=(input=='1')?EO:OE;
        else
            state=(input=='1')?OO:EE;
    };
    if(input=='\n'){
        if(state==EO)
            printf("Input Accepted\n");
        else
            printf("Input rejected\n");
    }
    return 0;
}