#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция №1: чтение строк из файла в вектор
void read(const string& file, vector<string>& lines)
{

}

// Функция №2: вывод строк на экран
void display(const vector<string>& lines)
{


}

// Функция №3: запись строк в файл (создаёт файл, если его нет)
void write(const string& file, const vector<string>& lines)
{

}

int main() {
    string inputFile = "1.txt";
    string outputFile = "2.txt";
    vector<string> lines;

    // Вызов функции №1: чтение строк из файла
    read(inputFile, lines);

    // Вызов функции №2: вывод строк на экран
    display(lines);

    // Вызов функции №3: запись строк в файл (создаёт файл, если его нет)
    write(outputFile, lines);

    return 0;
}
