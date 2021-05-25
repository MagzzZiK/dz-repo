#include <iostream>
using namespace std;

int main(int argc, const char** argv) { // 1TBS
    int a=12;
    int b=10;
    int sum = a + b;
    if (sum >= 10 && sum <= 20) {
         std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
