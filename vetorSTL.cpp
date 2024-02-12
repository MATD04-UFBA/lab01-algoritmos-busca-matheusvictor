#include <iostream>
#include <cstdlib>
#include <limits>
#include <algorithm>
#include <vector>

#define MAX 20

// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {

std::vector<int> v(MAX); // Инициализируем вектор с желаемым размером

    std::cout << "размер вектора = " << v.size() << std::endl;

    srand(time(NULL));

    for (unsigned int i = 0; i < MAX; i++) 
        v[i] = i;

    std::cout << "содержимое v: \n [ ";

    for (unsigned int i = 0; i < MAX; i++) 
        std::cout << v[i] << " , ";

    std::cout << "\b\b] \n";
    return 0;                
}
