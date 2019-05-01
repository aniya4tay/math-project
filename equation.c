#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    int i=0;
    int r=0;
    int v=0;
    char unknown [8];
    
    printf("What are you solving for Voltage equation?(V,I,or R)?\n");
    scanf("%c", unknown);
    
    if( *unknown=='V'){
        i=get_int ("I is:\n");
        r=get_int ("R is:\n");
        printf ("V is:%f \n",(float) i*r);
        }
    if (*unknown=='I'){
        v=get_int("V is:\n");
        r=get_int("R is:\n");
        printf ("I is:%f\n",(float) v/r);
        }
    if (*unknown== 'R'){
        v=get_int("V is:\n");
        i=get_int("I is:\n");
        printf ("R is:%f\n",(float) 
                v/i);
        }
    }
