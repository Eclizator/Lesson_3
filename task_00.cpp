
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
 return 0;
 }


int main() {

	std::cout << print_chars_and_return_sum(30, 97, 10) << std::endl;
	std::cout << print_chars_and_return_sum(97, 30, 10) << std::endl;
	std::cout << print_chars_and_return_sum(130, 97, 10) << std::endl;
	std::cout << print_chars_and_return_sum(97, 130, 10) << std::endl;
    std::cout << print_chars_and_return_sum(97, 98, 50) << std::endl;

    std::cout << print_chars_and_return_sum(97, 98, 2) << std::endl;
    std::cout << print_chars_and_return_sum(97, 98, 5) << std::endl;
    std::cout << print_chars_and_return_sum(97, 98, 8) << std::endl;
    std::cout << print_chars_and_return_sum(35, 42, 8) << std::endl;
    std::cout << print_chars_and_return_sum(95, 95, 8) << std::endl;
}


