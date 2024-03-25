#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

// Array is homogenous data structure
// data is stored contiguosly 
int main()
{
    int ids[100]; // raw array
    ids[0] = 12345;
    std::cout << ids[0] << std::endl;

    std::iota(std::begin(ids), std::end(ids),0);

    for(int i = 0;i<100;i++)
    {
        std::cout << ids[i] << std::endl;
    }

    std::array<int, 100> arr; // STL 
    std::iota(std::begin(arr), std::end(arr),10);
    arr.at(99) = 9; // access specified element with bounds checking
    for(int i = 0;i<100;i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
    return 0;
}