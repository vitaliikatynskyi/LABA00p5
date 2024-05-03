// #include <iostream> 
// using namespace std; 

// class B1 { 
// protected: 
//     int b1_value; //
// public: 
//     B1(int value) { // Конструктор класу з одним параметром
//         b1_value = value; // Ініціалізація поля b1_value
//     }
//     void show() { // Метод show, який виводить значення поля b1_value
//         cout << "B1: " << b1_value << endl;
//     }
// };

// class B2 { 
//     int b2_value; 
// public: 
//     B2(int value) { // Конструктор класу з одним параметром
//         b2_value = value; 
//     }
//     void show() { // Метод show, який виводить значення поля b2
//         cout << "B2: " << b2_value << endl;
//     }
// };

// class D1: protected B1, public B2 { // Оголошення класу D1, який успадковує класи B1 і B2
//     int d1_value; // Приватне поле d1_value
// public: // Секція публічних членів класу
//     D1(int b1, int b2, int d1): B1(b1), B2(b2) { 
//         d1_value = d1; // 
//     }
//     void show() {
//         cout << "D1: " << d1_value << endl;
//         B1::show();
//         B2::show();
//     }
// };

// class B3 { 
//     int b3_value; // Приватне поле b3_value
// public: 
//     B3(int value) { // Конструктор 
//         b3_value = value; 
//     }
//     void show() { // значення поля b3_value
//         cout << "B3: " << b3_value << endl;
//     }
// };

// class D2: public D1, public B3 { // Оголошення класу D2, який успадковує класи D1 і B3
//     int d2_value; // Приватне поле d2_value
// public: // Секція публічних членів класу
//     D2(int b1, int b2, int d1, int b3, int d2): D1(b1, b2, d1), B3(b3) { // Конструктор 
//         d2_value = d2; // 
//     }
//     void show() { // значення поля d2 та викликає методи show базових класів
//         cout << "D2: " << d2_value << endl;
//         D1::show();
//         B3::show();
//     }
// };

// class D3: public D2 { 
// public: 
//     D3(int b1, int b2, int d1, int b3, int d2): D2(b1, b2, d1, b3, d2) {} // Конструктор  
//     void show() { 
//         cout << "D3" << endl;
//         D2::show();
//     }
// };

// int main() { // Г
//     D3 d(1, 2, 3, 4, 5); //  класу D3
//     d.show(); // Виклик методу show для об'єкта d
//     return 0; 
// }
#include<iostream>
#include<string>

using namespace std;

class origin {
public:
    string word; 
    int NumberOfPage; // Номер сторінки, де з'являється слово
};

class SubjectIndex : public origin { // 
public:
    int CountOfWord; // Кількість входжень слова в документі
    int NumberOfLine; // Номер рядка, де з'являється слово
    int id = 0; //Типове значення ідентифікатора
    string str = "NULL"; // Типове значення рядка

    SubjectIndex() : CountOfWord(0), NumberOfLine(0) {
        NumberOfPage = id; // Ініціалізувати NumberOfPage за допомогою id
        word = str; // 
    }

    SubjectIndex(const SubjectIndex& c) {
        CountOfWord = c.CountOfWord;  
        NumberOfLine = c.NumberOfLine; 
        NumberOfPage = c.NumberOfPage; 
        word = c.word; 
    }

    SubjectIndex(int C, int N, int Np, string W) {
        CountOfWord = C; 
        NumberOfLine = N; 
        NumberOfPage = Np; 
        word = W; 
    }

    int SetCount(int a) {
        CountOfWord = a;  
        return a;
    }

    int SetNumber(int b) {
        NumberOfLine = b; 
        return b;
    }

    int SetPage(int c) {
        NumberOfPage = c; 
        return c;
    }

    int SetWord(string d) {
        word = d; 
        return 0;
    }

    int DeleteCount() {
        CountOfWord = NULL; 
        return 0;
    }

    int DeleteNumber() {
        NumberOfLine = NULL; 
        return 0;
    }

    int DeletePage() {
        NumberOfPage = NULL; 
        return 0;
    }

    void display() {
        cout << "Word: " << word << endl; 
        cout << "Number of page = " << " " << NumberOfPage << endl; 
        cout << "Count of word = " << " " << CountOfWord << endl; 
        cout << "Number of line = " << " " << NumberOfLine << endl; 
    }
};

int main() {
    SubjectIndex one(1, 3, 4, "hello"); 
    one.DeleteCount(); 
    one.display(); 
 }
// #include<iostream>
// #include<string>

// using namespace std;

// // Базовий клас, який містить слово та номер сторінки
// class origin {
// public:
//     string word; // Слово, пов'язане з елементом індексу
//     int NumberOfPage; // Номер сторінки, де з'являється слово
// };

// //успадковує властивості класу origin та додає додаткові поля та методи
// class SubjectIndex : public origin {
// public:
//     int CountOfWord; // Кількість входжень слова в документі
//     int NumberOfLine; // Номер рядка, де з'являється слово
//     int id = 0; //Типове значення ідентифікатора
//     string str = "NULL"; // Типове значення рядка

//     // Конструктор за замовчуванням
//     SubjectIndex() : CountOfWord(0), NumberOfLine(0) {
//         NumberOfPage = id; 
//         word = str; 
//     }

//     // Копіюючий конструктор
//     SubjectIndex(const SubjectIndex& c) {
//         CountOfWord = c.CountOfWord;  
//         NumberOfLine = c.NumberOfLine; 
//         NumberOfPage = c.NumberOfPage; 
//         word = c.word; 
//     }

//     // Конструктор з параметрами
//     SubjectIndex(int C, int N, int Np, string W) {
//         CountOfWord = C; 
//         NumberOfLine = N; 
//         NumberOfPage = Np; 
//         word = W; 
//     }

//     // Методи для встановлення значень полів
//     int SetCount(int a) {
//         CountOfWord = a;  
//         return a;
//     }

//     int SetNumber(int b) {
//         NumberOfLine = b; 
//         return b;
//     }

//     int SetPage(int c) {
//         NumberOfPage = c; 
//         return c;
//     }

//     int SetWord(string d) {
//         word = d; 
//         return 0;
//     }

//     // Методи для видалення значень полів
//     int DeleteCount() {
//         CountOfWord = NULL; 
//         return 0;
//     }

//     int DeleteNumber() {
//         NumberOfLine = NULL; 
//         return 0;
//     }

//     int DeletePage() {
//         NumberOfPage = NULL; 
//         return 0;
//     }

    
//     void display() {
//         cout << "Word: " << word << endl; 
//         cout << "Number of page = " << " " << NumberOfPage << endl; 
//         cout << "Count of word = " << " " << CountOfWord << endl; 
//         cout << "Number of line = " << " " << NumberOfLine << endl; 
//     }
// };


// int main() {
//     SubjectIndex one(1, 3, 4, "hello"); // Створення об'єкта класу SubjectIndex
//     one.DeleteCount(); // Видалення значення CountOfWord
//     one.display(); // Виведення значень полів об'єкта
// }
