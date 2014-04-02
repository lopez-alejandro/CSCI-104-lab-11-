#include <iostream>
 
int main(int argc, char *argv[]) {
    for(unsigned int i = 0; i < 100; i++) {
		if( i % 5 == 0)
			std::cout << i << ": " << "Buzz" << std::endl;
    }
    
    return(0);
}