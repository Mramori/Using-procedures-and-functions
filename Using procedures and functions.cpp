#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    const int n = 10; // Массив F
    const int m = 15; // Массив G

    std::vector<int> F(n);
    std::vector<int> G(m);

    for (int i = 0; i < n; ++i) {
        F[i] = rand() % 11 - 5; 
    }

    for (int i = 0; i < m; ++i) {
        G[i] = rand() % 11 - 5; 
    }

    std::cout << "Массив F: ";
    for (const auto& num : F) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Массив G: ";
    for (const auto& num : G) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int count_nonzero_F = 0;
    int count_nonzero_G = 0;

    for (const auto& num : F) {
        if (num != 0) {
            count_nonzero_F++;
        }
    }

    for (const auto& num : G) {
        if (num != 0) {
            count_nonzero_G++;
        }
    }

    // Вывод результатов
    std::cout << "F: " << count_nonzero_F << std::endl;
    std::cout << "G: " << count_nonzero_G << std::endl;

    return 0;
}

