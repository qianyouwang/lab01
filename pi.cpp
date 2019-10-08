#include <iostream>

inline double calcPI(int iterations) {
    double res = 0;

    for (int i = 0; i <= iterations; i++) {
        double delta = (1.0 / (2 * i + 1));
        
        if (i % 2 == 0) {
            res += delta;
        } else {
            res -= delta;
        }
    }

    return res * 4;
}

int main() {
    int iterations;

    while (true) {
        std::cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << std::endl;

        std::cin >> iterations;

        if (iterations < 0) {
            return 0;
        }

        auto res = calcPI(iterations);

        std::cout << "The approximate value of pi using " << iterations + 1 << " terms is: ";
        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(3);
        std::cout << res << std::endl;
    }
}