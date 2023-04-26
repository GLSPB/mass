#include <stdlib.h>
#include <iostream>

using namespace std;



// Ввести целочисленный массив, состоящий из 9 элементов. Поменять местами максимальный и минимальный элементы массива.

auto massminmax() {
    const int count = 9;
    int mass[count], a;

    for (int i = 0; i < count; i++)
    {
        cout << "Введите элемент массива:";

        cin >> mass[i];

    }

    int min = 0, max = 0;

    for (int i = 0; i < count; i++)
    {
        if (mass[i] < mass[min])
            min = i;

        if (mass[i] > mass[max])
            max = i;
    }

    int replacement = mass[max];
    mass[max] = mass[min];
    mass[min] = replacement;

    for (int i = 0; i < count; i++)
    {
        cout << mass[i] << " ";

    }
    return mass;
}

// Ввести целочисленный массив, состоящий из 17 элементов (положительных и отрицательных). Найти сумму элементов, абсолютное значение которых больше среднеарифметического модулей отрицательных элементов
auto masssum() 
{
    const int countsum = 17;
    int massum[countsum];
    double s_neg = 0;
    int n_neg = 0, s_pos = 0;

    for (int i = 0; i < countsum; i++)
    {
        cout << "Введите элемент массива:";
        cin >> massum[i];
        if (massum[i] < 0)
        {
            s_neg += abs(massum[i]);
            n_neg++;
        }
    }
    if (n_neg == 0)
    {
        cout << "Отрицательных чисел нет!!!\n";
        return 1;
    }
    s_neg /= n_neg;
    for (int i = 0; i < 17; i++)
        if (abs(massum[i]) > s_neg)
            s_pos += massum[i];
    cout << "Cумма элементов, абсолютное значение которых больше среднеарифметического модулей отрицательных элементов: " << s_pos << '\n';
    return 0;
}



int main()
{
    setlocale(LC_ALL, "Russian");
    
    // massminmax();
    // masssum();
}