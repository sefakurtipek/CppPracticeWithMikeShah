#include <iostream>

int main(){

    for(int i = 0; i< 10;i++)
    {
        std::cout << "start of loop: " << i << std::endl;
        continue;
        std::cout << "i is: " << i << std::endl;
    }

    for(int i = 0; i< 10;i++)
    {
        std::cout << "start of loop: " << i << std::endl;
        break;
        std::cout << "i is: " << i << std::endl;
    }
    
    return 0;
}