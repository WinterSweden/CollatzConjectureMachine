

#include <iostream>

int main() {
    int n = 1;
    int a = 0;

    while (true) {
        while (a != 1) {
            std::cout << "Loading... (" << n << ")\n";
            
            
            if (n % 2 == 0) {
                a = n / 2;
            } else {
                a = n * 3 + 1;
            }
            n = n + 2;
            
        }

    
    }

    
}
