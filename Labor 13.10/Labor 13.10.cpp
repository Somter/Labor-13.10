// Labor 13.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    map<string, string> arr;
    arr.insert(make_pair("Hello", "Привет"));   
    arr.insert(make_pair("rich", "богатый"));
    arr.insert(make_pair("мир", "world"));

    while (true) {
        cout << "Меню:" << endl;
        cout << "1 - Добавить слово" << endl;
        cout << "2 - Удалить слово" << endl;
        cout << "3 - Редактировать слово" << endl;
        cout << "4 - Найти слово" << endl;
        cout << "5 - Выйти из программы" << endl;
        cout << "Выберите действие: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            string word, translation;
            cout << "Введите слово: ";
            cin >> word;
            cout << "Введите перевод: ";
            cin >> translation;
            arr[word] = translation;
            cout << "Слово успешно добавлено в словарь." << endl;
            break;
        }
        case 2: {
            string word;
            cout << "Введите слово для удаления: ";
            cin >> word;
            arr.erase(word);
            cout << "Слово успешно удалено из словаря." << endl;
            break;
        }
        case 3: {
            string word, translation;
            cout << "Введите слово для редактирования: ";
            cin >> word;
            cout << "Введите новый перевод: ";
            cin >> translation;
            arr[word] = translation;
            cout << "Слово успешно отредактировано." << endl;
            break;
        }
        case 4: {
            string word;
            cout << "Введите слово для поиска: ";
            cin >> word;
            if (arr.find(word) != arr.end()) {
                cout << "Перевод: " << arr[word] << endl;
            }
            else {
                cout << "Слово не найдено в словаре." << endl;
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
