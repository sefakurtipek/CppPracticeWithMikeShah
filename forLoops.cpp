#include <iostream>
#include <array>
#include <algorithm>
int main()
{
    int arr[]= {1,2,3}; // raw array
    std::array<int,3> arr2{1,2,3}; // STD array

    for(int i = 0;i < arr2.size();i++)
    {
        std::cout << arr2[i] << std::endl;
    }

    // range based for loops
    for(int element: arr)
        std::cout << element << std::endl;
    for(int element: arr2)
        std::cout << element << std::endl;
    
    // range based for loop with auto
    for(auto element: arr2)
        std::cout << element << std::endl;

    int countDown = 3;
    while(countDown > 0){ // while loop
        std::cout << countDown << std::endl;
        countDown--;
    }

    int countDown2 = 3;
    do{ // do while loop
        std::cout << countDown2 << std::endl;
        countDown2--;
    }while(countDown2 > 0);

    std::array<int,3> myArray;
    std::fill(std::begin(myArray), std::end(myArray), 1024); // std::fill
    for(int element: myArray)
        std::cout << element << std::endl;

    return 0;
}