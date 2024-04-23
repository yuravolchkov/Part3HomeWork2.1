// Task1.Month.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class Months : int {January=1,February,March,April,May,June,July,August,September,October,November,December};

void NumberToMonthConverter(Months number)
{
    switch (number)
    {
    case Months::January:
        std::cout << "Январь";
        break;
    case Months::February:
        std::cout << "Ферваль";
        break;
    case Months::March:
        std::cout << "Март";
        break;
    case Months::April:
        std::cout << "Апрель";
        break;
    case Months::May:
        std::cout << "Май";
        break;
    case Months::June:
        std::cout << "Июнь";
        break;
    case Months::July:
        std::cout << "Июль";
        break;
    case Months::August:
        std::cout << "Август";
        break;
    case Months::September:
        std::cout << "Сентябрь";
        break;
    case Months::October:
        std::cout << "Октябрь";
        break;
    case Months::November:
        std::cout << "Ноябрь";
        break;
    case Months::December:
        std::cout << "Декабрь!";
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
        
    int Month_Number=-2; //
    
    for (; Month_Number != 0;)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> Month_Number;
        if (Month_Number < 0 or Month_Number > 12)
        {
            std::cout << "Неправильный номер!";
        }
        else if (Month_Number > 0 and Month_Number < 13 )
        {
            switch (Month_Number)
            {
            case 1:
                NumberToMonthConverter(Months::January);
                break;
            case 2:
                NumberToMonthConverter(Months::February);
                break;
            case 3:
                NumberToMonthConverter(Months::March);
                break;
            case 4:
                NumberToMonthConverter(Months::April);
                break;
            case 5:
                NumberToMonthConverter(Months::May);
                break;
            case 6:
                NumberToMonthConverter(Months::June);
                break;
            case 7:
                NumberToMonthConverter(Months::July);
                break;
            case 8:
                NumberToMonthConverter(Months::August);
                break;
            case 9:
                NumberToMonthConverter(Months::September);
                break;
            case 10:
                NumberToMonthConverter(Months::October);
                break;
            case 11:
                NumberToMonthConverter(Months::November);
                break;
            case 12:
                NumberToMonthConverter(Months::December);
                break;
            }
        }
        else if (Month_Number == 0)
        {
            std::cout << "До свидания";
        }
        std::cout << "\n";
    }
 return 6;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
