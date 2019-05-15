
#include <unistd.h>
#include <iostream>
#include <stdio.h>


int print_chars_and_return_sum (int a, int b, int c){
    if ( a < 32 || b < 32 || a > 126 || b > 126 || c > 30){
        return -1;
    }

    char outer = (char) a;
    char inner = (char) b;
    
    int i = 0;
    int j = 0;

 while (i <= c - 1){
     j = 0;
     
     while( j <= c - 1){
        
        if(  (i==j) || ( i+j ) == c-1){

            write(1,&outer,1);
        }
        
        else if (  j == 0 || i == c - 1 ||  j == c - 1 || i == 0 ){
            write(1,&inner,1);
        }
        else {
            
            write(1,"_",1);
        }
        
        j++;
        
     }
     write(1,"\n",1);
     i++;
     
 }
 if (c % 2){
    return (i * 2) - 1;
 }
 else{
     return c * 2;
 }
 }




