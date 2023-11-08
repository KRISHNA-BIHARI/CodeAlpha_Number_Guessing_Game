#include <iostream>
#include <ctime>

int main()
{
    std::cout << "Enter guess limit: ";
    int lim; std::cin >> lim;
    srand( time(0) ^ clock() );
    const int num = rand() % lim;
    while (true) {
        std::cout << "Enter your guess: ";
        int n; std::cin >> n;
        if (n < num) {
            std::cout << "Your guess is too small\n";
            continue;
        }else  if (n < num && n < num-5) {
            std::cout << "You are so close,go with larger value !\n";
            continue;
        }else if (n > num && n < num+5) {
            std::cout << "You are so close, go with the smaller value!\n";
            continue;
        } else if (n > num) {
            std::cout << "Your guess is too large\n";
            continue;
        } else {
            std::cout << "You Won!\n";
            break;
        }
    }
    

    return 0;
}