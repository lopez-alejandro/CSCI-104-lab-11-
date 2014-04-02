#include <iostream>
 
int main(int argc, char *argv[]) {
    for(unsigned int i = 0; i < 100; i++) {
<<<<<<< HEAD
        if(i % 3 == 0)
            std::cout << i << ": Fizz" << std::endl;
=======
		if( i % 5 == 0)
			std::cout << i << ": " << "Buzz" << std::endl;
>>>>>>> 2f0eacc154f6a686b92bff855450a5bea4e231d4
    }
    
    return(0);
}
