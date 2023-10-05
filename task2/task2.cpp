//Подключение директивы для ввода-вывода данных
#include <iostream>
/*Даны три числа, нужно найти сумму двух наименьших из них*/
//Функция main
int main()
{
    //объявление переменных
    double num1, num2, num3,summa,max,result;
    //ввод чисел от пользователя
    std::cin >> num1 >> num2 >> num3;
    //Нахождение суммы всех чисел
    summa = num1 + num2 + num3;
    //Вызов оператора if
    if (num1 > num2 && num1 > num3)
        max = num1;
    else if (num2 > num1 && num2 > num3)
        max = num2;
    else if (num3 > num1 && num3 > num2)
        max = num3;
    result = summa - max;
    //Вывод суммы двух наименьших из чисел
    std::cout << result;

}
