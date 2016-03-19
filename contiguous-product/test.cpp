#include "solution.hpp"

#include <cstdlib>
#include <iostream>

std::vector<int> readInput() {
    size_t numEls;
    std::cin >> numEls;
    std::vector<int> ret(numEls);

    for (auto &el : ret) {
        std::cin >> el;
    }

    return ret;
}

int readExpectedOutput() {
    int ret;
    std::cin >> ret;
    return ret;
}

template <typename T>
void dumpArray(const std::vector<T> &array) {
    std::cout << '[';
    auto begin = array.begin();
    const auto end = array.end();
    if (begin != end) {
        std::cout << *begin;
        while (++begin != end) {
            std::cout << ' ' << *begin;
        }
    }
    std::cout << ']' << std::endl;
}

int main(void) {
    size_t numTests;
    std::cin >> numTests;

    for (size_t idx = 0; idx < numTests; ++idx) {
        const std::vector<int> input = readInput();
        const int expectedOutput = readExpectedOutput();
        const int actualOutput = contiguousProduct(input);
        if (actualOutput != expectedOutput) {
            std::cout << "Failed at test case #" << (idx + 1) << std::endl
                      << "Your output: " << actualOutput
                      << ". Expected output: " << expectedOutput << std::endl
                      << "Input data:" << std::endl;
            dumpArray(input);
            return EXIT_FAILURE;
        }
    }
    std::cout << "All tests passed!" << std::endl;

    return EXIT_SUCCESS;
}
