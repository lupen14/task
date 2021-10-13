// ##############################
// #
// # ������� ����� � ����� http://cppstudio.com/cat/285/286/
// #
// ##############################

#include <QCoreApplication>
#include <iostream>

using namespace std;

// ������� ����� �� �������
void task1()
{
    char inputChar[5];

    cout << "������� ����������� �����: ";

    cin.getline(inputChar, 6);

    for (unsigned int iii = 0; iii < sizeof (inputChar)/sizeof (char); ++iii)
    {
        cout << iii + 1 << " ����� ����� " << inputChar[iii] << endl;
    }
}

// ����������������� �������������� ��������� � �++
void task2()
{
    int a = 0, b = 0, f = 0;

    cout << "������� ����� a, b � f: " << endl;

    cin >> a;
    cin >> b;
    cin >> f;

    double x = (a + b - f / a) + f * a * a - (a + b);

    cout << "��������� �� �������: x = (a + b - f / a) + f * a * a - (a + b)" << endl;
    cout << "x=" << x;
}

// ������� � ������� �������
void task3()
{
    char c;
    cout << "������� ����� ������� ��������:" << endl;

    cin >> c;

    cout << "�� �� ����� � ������� ��������: " << static_cast<char>(toupper(c)) << endl;
}


//������� ����� �� ������ � ���������
void tasl4()
{
    int meters(0);
    double kilometers(0);

    cout << "������� ����� �� ������ � ���������" << endl;
    cout << "������� ���������� ������: ";
    cin >> meters;
    cout << meters << endl;

    kilometers = meters / 10e2;

    cout << meters << " ������ ����� " << kilometers << " ���������" << endl;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    setlocale(LC_ALL, "");

    tasl4();

    return a.exec();
}
