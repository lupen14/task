// ##############################
// #
// # Решение задач с сайта http://cppstudio.com/cat/285/286/
// #
// ##############################

#include <QCoreApplication>
#include <iostream>

using namespace std;

// Деление числа на разряды
void task1()
{
    char inputChar[5];

    cout << "Введите пятизначное число: ";

    cin.getline(inputChar, 6);

    for (unsigned int iii = 0; iii < sizeof (inputChar)/sizeof (char); ++iii)
    {
        cout << iii + 1 << " цифра равна " << inputChar[iii] << endl;
    }
}

// Запрограммировать математическое выражение в С++
void task2()
{
    int a = 0, b = 0, f = 0;

    cout << "Введите цифры a, b и f: " << endl;

    cin >> a;
    cin >> b;
    cin >> f;

    double x = (a + b - f / a) + f * a * a - (a + b);

    cout << "Вычисляем по формуле: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
    cout << "x=" << x;
}

// Перевод в верхний регистр
void task3()
{
    char c;
    cout << "Введите букву нижнего регистра:" << endl;

    cin >> c;

    cout << "Та же буква в верхнем регистре: " << static_cast<char>(toupper(c)) << endl;
}


//Перевод числа из метров в километры
void tasl4()
{
    int meters(0);
    double kilometers(0);

    cout << "Перевод числа из метров в километры" << endl;
    cout << "Введите количество метров: ";
    cin >> meters;
    cout << meters << endl;

    kilometers = meters / 10e2;

    cout << meters << " метров будет " << kilometers << " километра" << endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    setlocale(LC_ALL, "");

    tasl4();

    return a.exec();
}
