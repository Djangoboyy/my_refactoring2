#include <iostream>
#include <vector>
#include "counting_sort.hpp"


void gra::sortings::dcmps_into_cells( std::vector<int> Vector, int Lim, std::vector<std::vector<int>> Queries ) { // int Q[] // counting_sort_mod - модифицировано от концепции сортирокой подсчетом

    std::vector<int> C(Lim, 0) ;
    int N = 0;
    for ( int i : Vector ) { // O(N)
        C[i]++;
        N += 1;
    }


    int prev = -1;
    for ( int i = 0; i <= Lim ; ++i ) { // O(K)
        if( C[i] ) {
            C[i] += C[prev];
            prev = i;
        }
    }


    for ( std::vector<int> qi: Queries ) { // O(Q)
        std::cout << qi[0] << "..." << qi[1] << " : ";

        if( !( C[qi[1]] && C[qi[0]] ) ) {
            std::cout <<  0 << std::endl;
            continue;
        }

        std::cout << C[qi[1]] - C[qi[0]] + 1 << std::endl;
    }

}
