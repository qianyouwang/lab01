#include <iostream>

int main() {
    int row, col;

    while (true) {
        std::cout << "Enter number of rows and columns:" << std::endl;

        std::cin >> row >> col;

        if (row < 1 || col < 1) {
            return 0;
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                std::cout << "X.";
            }
            std::cout << std::endl;
        }
    }
}
