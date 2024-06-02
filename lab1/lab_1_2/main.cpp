#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::cout.setf(ios::fixed);
    std::cout.width(80);
    std::cout << setw(5) << "*****";
    std::cout << setw(37) << right << "ТУСУР";
    std::cout << setw(38) << right << "*****" << endl << endl;
    std::cout << setw(80) << right << "Факультет: Доп. образования" << endl;
    std::cout << setw(80) << right << "Группа: 315" << endl;
    std::cout << setw(80) << right << "Слушатель: Парфенов Сергей" << endl;
    std::cout << setw(30) << right << "Мурманск 2024" << endl;
    return 0;
}
