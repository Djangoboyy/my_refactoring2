// Вам дан массив из N элементов, где 0 ≤ a[i] ≤ K − 1.
// ▶ Необходимо ответить на Q запросов, сколько чисел из вашего массива
// принадлежат отрезку [l . . . r ], каждый запрос за время O(1).
// ▶ Алгоритм должен выполняться за время O(N + K + Q).
#include <vector>
#include "counting_sort.hpp"




// [l..r] = (N — [0..l]) — (N — [0..r]) + 1 = [0..r] - [0..l] + 1

// 0 1 2 4 5 7 8 8 12 87 98

// 2 - 8 = 6
// 1 - 7 = 5
// 12 - 87 = 2

int main() {


    int limit = 99;
    std::vector<int> test_vector = {8, 2, 5, 1, 7, 8, 4, 98, 12, 87, 0};

    std::vector<std::vector<int>> queries = {
        {9, 9},
        {0, 0},
        {2, 9},
        {2, 8},
        {1, 7},
        {12, 87},
        {0, 5},
        {1, 12},
        {0, 98}
    };

    gra::sortings::dcmps_into_cells( test_vector, limit, queries );


    return 0;

}




















