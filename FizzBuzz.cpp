#include <iostream>
 
int main(int argc, char *argv[]) {
    for(unsigned int i = 0; i < 100; i++) {

        if(i % 3 == 0)
            std::cout << i << ": Fizz" << std::endl;
        else if( i % 5 == 0)
		        std::cout << i << ": " << "Buzz" << std::endl;
        else
            std::cout << i << std::endl;
    }
    
    return(0);
}
