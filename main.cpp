#include <iostream>

using namespace std;

class People {
private: /* Fields */
    string name;
    string surname;
    int age;

public: /* Constructor, Getters & Setters and other methods */

    /* Constructor */
    People(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    /* Simple methods */
    void sleep() {
        cout << "i am sleeping now" << endl;
    }

    void eat() {
        cout << "i am eating now" << endl;
    }

    /* Getters & Setters */
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getSurname() {
        return surname;
    }

    void setSurname(string surname) {
        this->surname = surname;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

};

/* Student class which extands People */
class Student: public People {
private: /* Fields */
    string university;

public: /* Constructor, Getters & Setters and other methods */

    /* self Constructor and super Constructor */
    Student(string name, string surname, int age, string university): People(name, surname, age) {
        this->university = university;
    }

    /* New methods */

    void study() {
        cout << "i am studying in " << university << endl;
    }

    void eat() {
        cout << "i have no time for that" << endl;
    }

    /* Getters & Setters */
    string getUniversity() {
        return university;
    }

    void setUniversity(string university) {
        this->university = university;
    }

};

void testMethod() {
    Student student("Yerassyl", "Unerbek", 18, "Astana IT University");
    student.study();
    student.eat();
}

int main()
{
    testMethod();
    return 0;
}
