
#include <iostream>
int high = 0;
int shirina = 9;
int shirina_2 = 9;
int i_2 = 0;

int main()
{
    std::cin >> high;
        for (int i = 0; i <= ((high-1))+1; i++) {
            std::cout << ' ';
        }
        std::cout << '*';
        for (int i = 0; i <= high; i++) {
            if (i == high) {
                std::cout << '\n';
                for (int c = 0; c <= high*2+2; c++) {
                    std::cout << '*';
                }
            }
            else {
                std::cout << '\n';
                for (int a = 1; a <= (high)-i; a++) {
                    std::cout << ' ';
                }
                std::cout << '*';
                for (int b = 0; b <= i * 2; b++) {
                    std::cout << ' ';
                }
                std::cout << '*';
            }

        }
    
    
}
