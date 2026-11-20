/*
Задание 2. Максимум и минимум

Напишите программу, которая создаёт массив целых чисел на 10 элементов, выводит на экран все элементы массива, 
находит минимальный и максимальный элементы массива и выводит их на экран. Числа для заполнения массива придумайте сами.
*/

#include <iostream>

#define COUT std::cout
#define ENDL std::endl


int main() {
    srand(time(NULL));
    const int SIZE = 10;

    int k[SIZE] = {0};
    
    for (int i = 0; i < SIZE; i++)
        k[i] = rand() % 1001;

    int min = k[0], max = k[0];

    for (int i = 1; i < SIZE; i++)
        if (k[i] > max) max = k[i];
        else if (k[i] < min) min = k[i];
    
    COUT << "Massiv: ";
    for (int i = 0; i < SIZE; i++)
        COUT << k[i] << " ";

    COUT << ENDL;


    COUT << "Min element: " << min << ENDL;
    COUT << "Max element: " << max << ENDL;
    

    return EXIT_SUCCESS;
}