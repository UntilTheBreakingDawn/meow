#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ������� �1: ������ ����� �� ����� � ������
void read(const string& file, vector<string>& lines)
{
 ifstream inputFile(file);
 if (inputFile.is_open()){string line;
                          while (getline(inputFile, line))
                          {lines.push_back(line);
                          }
                         }
 else {cout << "Error" << endl;}
}

// ������� �2: ����� ����� �� �����
void display(const vector<string>& lines)
{

}

// ������� �3: ������ ����� � ���� (������ ����, ���� ��� ���)
void write(const string& file, const vector<string>& lines)
{

}

int main() {
    string inputFile = "1.txt";
    string outputFile = "2.txt";
    vector<string> lines;

    // ����� ������� �1: ������ ����� �� �����
    read(inputFile, lines);

    // ����� ������� �2: ����� ����� �� �����
    display(lines);

    // ����� ������� �3: ������ ����� � ���� (������ ����, ���� ��� ���)
    write(outputFile, lines);

    return 0;
}
