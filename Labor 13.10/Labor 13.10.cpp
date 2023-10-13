// Labor 13.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    map<string, string> arr;
    arr.insert(make_pair("Hello", "������"));   
    arr.insert(make_pair("rich", "�������"));
    arr.insert(make_pair("���", "world"));

    while (true) {
        cout << "����:" << endl;
        cout << "1 - �������� �����" << endl;
        cout << "2 - ������� �����" << endl;
        cout << "3 - ������������� �����" << endl;
        cout << "4 - ����� �����" << endl;
        cout << "5 - ����� �� ���������" << endl;
        cout << "�������� ��������: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            string word, translation;
            cout << "������� �����: ";
            cin >> word;
            cout << "������� �������: ";
            cin >> translation;
            arr[word] = translation;
            cout << "����� ������� ��������� � �������." << endl;
            break;
        }
        case 2: {
            string word;
            cout << "������� ����� ��� ��������: ";
            cin >> word;
            arr.erase(word);
            cout << "����� ������� ������� �� �������." << endl;
            break;
        }
        case 3: {
            string word, translation;
            cout << "������� ����� ��� ��������������: ";
            cin >> word;
            cout << "������� ����� �������: ";
            cin >> translation;
            arr[word] = translation;
            cout << "����� ������� ���������������." << endl;
            break;
        }
        case 4: {
            string word;
            cout << "������� ����� ��� ������: ";
            cin >> word;
            if (arr.find(word) != arr.end()) {
                cout << "�������: " << arr[word] << endl;
            }
            else {
                cout << "����� �� ������� � �������." << endl;
            }
            break;
        }
        case 5:
            return 0;
        }

        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            cout << it->first << " - " << it->second << "\t";
        }
        cout << endl;
    }

    return 0;
}
