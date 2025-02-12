Ось базовий приклад обробки даних в C++, який включає в себе введення, обробку та виведення даних. Код розраховано на обробку інформації про студентів.

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Структура для зберігання інформації про студента
struct Student {
    string name;
    int age;
    double gpa;
};

// Функція для введення даних про студента
void inputStudentData(Student& student) {
    cout << "Enter student's name: ";
    getline(cin, student.name);
    cout << "Enter student's age: ";
    cin >> student.age;
    cin.ignore();
    cout << "Enter student's GPA: ";
    cin >> student.gpa;
    cin.ignore();
}

// Функція для виведення даних про студента
void printStudentData(const Student& student) {
    cout << "Student's name: " << student.name << endl;
    cout << "Student's age: " << student.age << endl;
    cout << "Student's GPA: " << student.gpa << endl;
}

// Функція для обробки даних про студента
void processStudentData(vector<Student>& students) {
    for (Student& student : students) {
        // Інкрементуємо вік студента
        student.age++;
        // Обробка GPA (наприклад, від'ємна корекція за певні умови)
        if (student.gpa > 3.5) student.gpa -= 0.1;
    }
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore();

    vector<Student> students(numStudents);
    for (Student& student : students) {
        inputStudentData(student);
    }

    processStudentData(students);

    for (const Student& student : students) {
        printStudentData(student);
    }

    return 0;
}
```

Цей код працює наступним чином:
1. Усі дані вводяться користувачем через консоль.
2. Дані про студентів зберігаються у векторі.
3. Функція `processStudentData` змінює ці дані (у цьому випадку, інкрементує вік і зменшує GPA).
4. Дані про студентів виводяться у консоль після обробки.