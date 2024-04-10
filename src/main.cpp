// #include <iostream>

// using namespace std;

// class B1 {
//     int b1_value;
// public:
//     B1(int value) {
//         b1_value = value;
//     }
//     void show() {
//         cout << "B1: " << b1_value << endl;
//     }
// };

// class B2 {
//     int b2_value;
// public:
//     B2(int value) {
//         b2_value = value;
//     }
//     void show() {
//         cout << "B2: " << b2_value << endl;
//     }
// };

// class D1: public B1, public B2 {
//     int d1_value;
// public:
//     D1(int b1, int b2, int d1): B1(b1), B2(b2) {
//         d1_value = d1;
//     }
//     void show() {
//         cout << "D1: " << d1_value << endl;
//         B1::show();
//         B2::show();
//     }
// };

// class B3 {
//     int b3_value;
// public:
//     B3(int value) {
//         b3_value = value;
//     }
//     void show() {
//         cout << "B3: " << b3_value << endl;
//     }
// };

// class D2: public D1, public B3 {
//     int d2_value;
// public:
//     D2(int b1, int b2, int d1, int b3, int d2): D1(b1, b2, d1), B3(b3) {
//         d2_value = d2;
//     }
//     void show() {
//         cout << "D2: " << d2_value << endl;
//         D1::show();
//         B3::show();
//     }
// };

// class D3: public D2 {
// public:
//     D3(int b1, int b2, int d1, int b3, int d2): D2(b1, b2, d1, b3, d2) {}
//     void show() {
//         cout << "D3" << endl;
//         D2::show();
//     }
// };

// int main() {
//     D3 d(1, 2, 3, 4, 5);
//     d.show();
//     return 0;
// }






#include<iostream>
#include<string>

using namespace std;

class origin {
public:
    string word;
    int NumberOfPage;
};

class SubjectIndex : public origin {
public:
    int CountOfWord;
    int NumberOfLine;
    int id = 0;
    string str = "NULL";

    SubjectIndex() : CountOfWord(0), NumberOfLine(0) {
        NumberOfPage = id;
        word = str;
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
