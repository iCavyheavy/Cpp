/*
#include <iostream>
#include <cstdlib> // для system
using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    //system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}

////////////////////////////////////////////////////////

#include <std_lib_facilities.h>
int main()
{
    // Chapter 2. Hello World.
    cout << "Hello, programming! \nHere we go! \n";
    //keep_window_open(); // Ожидание ввода символа
    //system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}

//////////////////////////////////////////////////////

#include <std_lib_facilities.h>
int main()
{  
    //Chapter 3. Name and age.
    cout << " Enter your name and age\n";
    string first_name; // Строковая переменная
    double age; // Целочисленная переменная
    cin >> first_name; // Считыва ем строковое зна чение
    cin >> age; // Считыва ем целочисленное зна чение
    cout << " Hello, " << first_name << " (aqe " << age << " (" << age * 12 << " month)) \n ";
}    c

///////////////////////////////////////////////////

    //Chapter 3.5 Repeating words
#include <std_lib_facilities.h>
int main()
{
    int number_of_words = 0;
    string previous = ""; // Переменная previous инициализирована "не словом"
    string current; //Текущее слово
    while (cin >> current) { // Считываем поток слов
        ++number_of_words; //увеличимваем счетчик слов 
        if (previous == current) // Проверяем совпадение с предыдущим словом
            cout << "Repeating word is: " << current 
            << " after " << number_of_words 
            << " words." << "\n";
        previous = current;
    }
}

//"p" - WTF is 2099744 ??? - '\n' -> "\n" !!!!!!!!!!

//////////////////////////////////////////////////////

//безопасное преобразование
#include <std_lib_facilities.h>
int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char с2 = i1;
    cout << "c2 = " << с2 << ";\n";
    cout << "c = " << c << "; i1 = " << i1 << "; i2 = " << i2 << ".\n";
}

//небезопасное преобразование
#include <std_lib_facilities.h>
int main()
{
    double d = 0;
    while (cin >> d) { // Повторяем последующие инструкции, пока вводятся числа
        int i = d; // Попытка в тиснуть double в int
        char с = i; // Попытка втиснуть int в char
        int i2 = с; // Получаем целое зна чение типа char
        cout << " d== " << d // Исходное зна чение типа dоиЫе
            << " i== " << i // Преобра зованное в зна чение int
            << " i2== " << i2 // Целочисленное зна чение char
            << " char(" << с << ") \n"; // Символ
    }
}

//narrowing conversion warning
#include <std_lib_facilities.h>
int main()
{
    double х {2.0}; // OK
    int у {х}; // Error : douЫe->int может быть сужающим
    int а {10}; // OK
    char Ь {а}; // Оимбка : int->char может быть сужающим
}


//p124 ansver the control questions!
#include <std_lib_facilities.h>
int main()
{
    cout << "Enter the recipient's name (and press 'enter'): \n ";
    string first_name; // first_name - переменная типа string
    string friend_name; // имя друга
    cin >> first_name; // Считываем символы в first name
    cout << "Enter the friend's name (and press 'enter'): \n ";
    cin >> friend_name;
    cout << "Dear, " << first_name << "! \n" << "How are you? I'm good." << " \n"
        << "How long have you met " << friend_name << "? \n\n";

    char friend_sex = 0; //пол друга
    cout << "If your friend is male type - m, if woman type - f (and press 'enter'): \n ";
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "When you will see " << friend_name << ", ask him to call me please. \n";
    if (friend_sex == 'f')
        cout << "When you will see " << friend_name << ", ask her to call me please. \n\n";

    int age = 0; //возраст друга
    cout << "Enter yor friend's age: \n";
    cin >> age;
    if (age <= 0 or age >= 110)
    {
        simple_error("you're kidding!");
    }
    cout << "I heard that you just celebrated your birthday, and you are " << age << " years now.\n";
    if (age < 12)
        cout << "Next year you will be " << age + 1 << " !\n";
    if (age == 17)
        cout << "Next year you can vote!\n";
    if (age > 70)
        cout << "I hope you don't miss retirement!\n";

    cout << "\n\nSincerely yours, ";
    string my_name;
    cin >> my_name;
    int F$sdsl;
}

//p127

//miles to kilometers
#include <std_lib_facilities.h>
int main()
{
    double ml = 0;
    cout << "Type distance in miles you want to convert to kilometers.\n";
    cin >> ml;
    double km = ml * 1.609;
    cout << ml << " is " << km << "\n";
}

//lowes val, biggest val, +, -, *, /.
#include <std_lib_facilities.h>
int main()
{
    double val1;
    double val2;
    cout << "Enter values you want to compare\nValue1: ";
    cin >> val1;
    cout << "\nValue2: ";
    cin >> val2;
    cout << "What do you want to do with this values?\n-compare;\n-add;\n-sub;\n-mul;\n-div;\n";
    string ansver;
    cin >> ansver;
    double solution;
    if (ansver == "compare")
    {
        if (val1 > val2)
        {
            cout << val1 << " is bigger.\n";
        }
        if (val2 > val1)
        {
            cout << val2 << " is bigger.\n";
        }
        if (val1 = val2)
        {
            cout << val1 << " and " << val2 << " are equal.\n";
        }
    }
        
    if (ansver == "add")
    {
        cout << "The solution is " << val1 + val2 << ".\n";
    }
    if (ansver == "sub")
    {
        cout << "The solution is " << val1 - val2 << ".\n";
    }
    if (ansver == "mul")
    {
        cout << "The solution is " << val1 * val2 << ".\n";
    }
    if (ansver == "div")
    {
        cout << "The solution is " << val1 / val2 << ".\n";
    }
}


//sort 3 values;
#include <std_lib_facilities.h>
int main()
{
    double val1;
    double val2;
    double val3;
    double min;
    double mid;
    double max;
    cout << "Enter values you want to sort\nValue1: ";
    cin >> val1;
    min = val1;
    cout << "\nValue2: ";
    cin >> val2;
    if (val2 <= min)
    {
        mid = min;
        min = val2;
    }
    if (val2 > min)
    {
        mid = val2;
    }
    cout << "\nValue3: ";
    cin >> val3;
    if (val3 <= mid)
    {
        if (val3 <= min)
        {
            max = mid;
            mid = min;
            min = val3;
        }
        if (val3 > min)
        {
            max = mid;
            mid = val3;
        }
    }
    if (val3 > mid)
    {
        max = val3;
    }
    cout << "Calculating...\n";
    cout << min << ", " << mid << ", " << max << ".\n";
}


//sort 3 strings;
#include <std_lib_facilities.h>
int main()
{
    string str1;
    string str2;
    string str3;
    string min;
    string mid;
    string max;
    cout << "Enter values you want to sort\nValue1: ";
    cin >> str1;
    min = str1;
    cout << "\nValue2: ";
    cin >> str2;
    if (str2 <= min)
    {
        mid = min;
        min = str2;
    }
    if (str2 > min)
    {
        mid = str2;
    }
    cout << "\nValue3: ";
    cin >> str3;
    if (str3 <= mid)
    {
        if (str3 <= min)
        {
            max = mid;
            mid = min;
            min = str3;
        }
        if (str3 > min)
        {
            max = mid;
            mid = str3;
        }
    }
    if (str3 > mid)
    {
        max = str3;
    }
    cout << "Calculating...\n";
    cout << min << ", " << mid << ", " << max << ".\n";
}


//sort 3 strings;
#include <std_lib_facilities.h>
int main()
{
    int odd_even;
    int val1=0;
    cin >> odd_even;
    val1 = odd_even % 2;
    if (val1 == 0)
    {
        cout << "Number " << odd_even << " is even\n";
    }
    if (val1 != 0)
    {
        cout << "Number " << odd_even << " is odd\n";
    }
    cout << val1 << "\n";
    cout << odd_even << "\n";
}


#include <std_lib_facilities.h>
int main()
{
    string words;
    int val1=0;
    cin >> words;
    if (words == "zero")
    {
        cout << "0\n";
        val1 = 1;
    }
    if (words == "one")
    {
        cout << "1\n";
        val1 = 1;
    }
    if (words == "two")
    {
        cout << "2\n";
        val1 = 1;
    }
    if (words == "three")
    {
        cout << "3\n";
        val1 = 1;
    }
    if (words == "four")
    {
        cout << "4\n";
        val1 = 1;
    }
    if (val1 != 1)
    {
        cout << "I dont know this number!\n";
    }
}


#include <std_lib_facilities.h>
int main()
{
    double val1;
    double val2;
    string operation;
    cin >> operation >> val1 >> val2;
    if (operation == "+")
    {
        cout << val1 + val2 << "\n";
    }
    if (operation == "-")
    {
        cout << val1 - val2 << "\n";
    }
    if (operation == "*")
    {
        cout << val1 * val2 << "\n";
    }
    if (operation == "/")
    {
        cout << val1 / val2 << "\n";
    }
}
*/

#include <std_lib_facilities.h>
int main()
{
    unsigned long long coin1 = 0;
    unsigned long long coin5 = 0;
    unsigned long long coin10 = 0;
    unsigned long long coin25 = 0;
    unsigned long long coin50 = 0;
    unsigned long long total = 0;
    cout << "How many 1 cent coins do you have?\n";
    cin >> coin1;
    cout << "How many five cent coins do you have?\n";
    cin >> coin5;
    cout << "How many dimes do you have?\n";
    cin >> coin10;
    cout << "how many quarters do you have?\n";
    cin >> coin25;
    cout << "How many fifty cent coins do you have?\n";
    cin >> coin50;
    
    cout << "You have " << coin1 << " cents\n";
    cout << "You have " << coin5 << " five cent coins\n";
    cout << "You have " << coin10 << " dimes\n";
    cout << "You have " << coin25 << " quarters\n";
    cout << "You have " << coin50 << " fifty cent coins\n";
    total = coin1 * 1 + coin5 * 5 + coin10 * 10 + coin25 * 25 + coin50 * 50;
    cout << "Total amount of your coins is " << total << " cents\n";
    cout << "It's " << total/100;
    total %= 100;
    cout << " dollars and " << total << " cents\n";
}