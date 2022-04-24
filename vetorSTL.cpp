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

std::vector<int> v;

	std::cout << "tamanho do vetor = " << v.size() << std::endl;

    srand( time(NULL) );

    for (unsigned int i=0 ; i < MAX ; i++) 
        v.push_back(i);
        
    std::cout << "conteudo de v: \n [\b\b ";

    for (unsigned int i = 0 ; i < MAX ; i++) 
       std::cout << v[i] << " , ";

    std::cout << "\b\b] \n";
 	return 0;        
}