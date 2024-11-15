#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция №1: чтение строк из файла в вектор
void read(const string& f, vector<string>& lines)
{

}

// Функция №2: вывод строк на экран
void display(const vector<string>& lines)
{

}

// Функция №3: запись строк в файл
void write(const string& f, const vector<string>& lines)
{

}

int main()
{
    string inputFile = "input.txt";
    string outputFile = "output.txt";
    vector<string> lines;

    // Вызов функции №1: чтение строк из файла
    read(inputFile, lines);

    // Вызов функции №2: вывод строк на экран
    display(lines);

    // Вызов функции №3: запись строк в файл
    write(outputFile, lines);

    return 0;
}
