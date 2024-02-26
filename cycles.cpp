#include <iostream>
#include <cmath>
int main()
{
    for (int i = 0; i < 11; i++){
        std::cout << i << std::endl;
    }
    
    int j = 0;
    while (true) {
        if (!(j < 10)) break;
        std::cout << j + 1 << std::endl;
        j++;
    }
    
    int x = 0;
    do {
        x++;
        std::cout << x << std::endl;
    }
    while ( x < 10);

    // Странный for
    for(int i = 0; i < 3; i ++, std::cout << "Hello world!" << std::endl); 

    // Сумма цифр числа
    int x;
    std::cin >> x;
    int sum;
    while (x != 0){
        sum += x % 10;
        x /= 10;
    }
    std::cout << sum << std::endl;

    /*Для данного натурального числа n определите такое наименьшее целое k, что 2^k≥n. Например, при вводе числа 7 программа должна вывести 3.*/
    int n;
    std::cin >> n;;
    for (int i = 1; i < n; i++){
        if (pow(2, i) >= n) {
            std::cout << i << std::endl;
            break;
    }
}
}
