#ifndef _Uym_mathtask_h_
#define _Uym_mathtask_h_

#include <cstring>
using namespace std;

// проверка корректности вводимых данных
bool UserInput(string input)  {
    char first_char = input[0]; 
    if (first_char == '-' || !isdigit(first_char)) return false; 
    // добавляем, чтобы не было отрицательных значений
   
    else if (input.empty()) return false;
    // попытаться
    try {
        // преобразование введенного значения в тип int
        int number = stoi(input);

    }
    catch (...) // если возникла ошибка в блоке try
    { return false; }
    return true;
}

// вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB +10 ;

}
#endif