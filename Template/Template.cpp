#include <iostream>
#include <iomanip>
/*
        ДОМАШНЕЕ ЗАДАНИЕ:
        Задание 1:
        - Реализуйте шаблонный тип с полем value, которое будет содержать true
        если в качестве шаблонного параметра указан один из типов: bool, char, short, int
        и false в противном случае
        - Для реализации используйте специализацию шаблонов

        */
template<typename T>
struct Chek
{
    static  const bool act = false;
};

template<>
struct Chek<bool>
{
    static  const bool act = true;
};

template<>
struct Chek<int>
{
    static  const bool act = true;
};

template<>
struct Chek<short>
{
    static  const bool act = true;
};

template<>
struct Chek<char>
{
    static  const bool act = true;
};



/*
        Задание 2:
        - Реализуйте шаблонный тип с полем value, которое будет содержать true
        если в качестве шаблонного параметра указан ссылочный тип и false в противном случае
        - Для реализации используйте специализацию шаблонов*/


template<typename T>
struct my_struct
{
    static  const bool act = false;
};


template<typename T>
struct my_struct<T&>
{
    static  const bool act = true;
};


int main()
{
    std::cout << std::boolalpha;

    std::cout << "Chek<int> = " << Chek<int>::act << '\n';
    std::cout << "Chek<bool> = " << Chek<bool>::act << '\n';
    std::cout << "Chek<char> = " << Chek<char>::act << '\n';
    std::cout << "Chek<short> = " << Chek<short>::act << '\n';
    std::cout << "Chek<double> = " << Chek<double>::act << '\n';
    std::cout << "Chek<float> = " << Chek<float>::act << '\n';



    std::cout << "my_struct<int&> = " << my_struct<int&>::act << '\n';
    std::cout << "my_struct<int> = " << my_struct<int>::act << '\n';
}
