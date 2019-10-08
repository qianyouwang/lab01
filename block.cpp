#include <iostream>

int main() {
    std::cout << "Enter number of rows and columns:" << std::endl;

    int row, col;
    std::cin >> row >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << "X.";
        }
        std::cout << std::endl;
    }

    return 0;
}
