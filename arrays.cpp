#include <iostream>

int sum(int number)
{
    int num = number;
    int sumOfDigits = 0;
    while (num)
    {
        sumOfDigits += num % 10;
        num = num / 10;
    }
    return sumOfDigits;}


void sort(int *x, int n){
    int temp;
    for (int i=0; i<n;i++){
        for (int j =0; j < n; j ++){
            if (x[i] < x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            
        }
    }
}}



int main()
{
    int n;
    std::cin >> n;
    int *a = new int[n];
    for (int i=0; i<n;i++){
        std::cin >> a[i];
    }
    sort(a, n);
    for (int i=0; i<n;i++){
        std::cout << a[i] << std::endl;
    }
    delete []a;
    return 0;
}
