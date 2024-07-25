#include <iostream>

void printGrid(int* grid) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout << *(grid + i * 9 + j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int grid_layout[9][9] = {0}; 
    printGrid(&grid_layout[0][0]);
    return 0;
}

