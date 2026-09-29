#include <iostream>
#include <string>
using namespace std;

// Define a struct for student records
struct StudentRecord {
    string name;
    int age;
    string indexNumber;
    float height;
    string gender;
    string favoriteCourse;
    string favoriteFood;
    string favoriteLecture;
    string gpa;
};

int main() {
    const int numStudents = 10;
    StudentRecord students[numStudents];

    cout << "Enter details for" << numStudents << " students:" << endl;

    // Input for 10 students 
    for (int i = 0; i < numStudents; ++i) {
        cout << "\n======STUDENT RECORD============ " << (i + 1) <<  "=======" << endl;
        cout << "Enter name:";
        getline(cin >> ws, students[i].name); // Use ws to handle previous newline characters
        cout << "Enter age:";
        cin >> students[i].age;
        cout <<"Enter index number:";
        cin >> students[i].indexNumber;
        cout <<"Enter height:";
        cin >> students[i].height;
        cout <<"Enter gender:";
        cin >> students[i].gender;
        cout <<"Enter favorite course:";
        cin >> students[i].favoriteCourse;
        cout <<"Enter favorite food:";
        cin >> students[i].favoriteFood;
        cout <<"Enter favorite lecture:";
        cin >> students[i].favoriteLecture;
        cout <<"Enter GPA:";
        cin >> students[i].gpa;

    }
    // Display the output for all student records
    cout << "\n======STUDENT RECORDS=============" << endl;  
      for (int i = 0; i < numStudents; ++i) {
        cout << "\n======STUDENT RECORD============ " << (i + 1) << "=======" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Index Number: " << students[i].indexNumber << endl;
        cout << "Height: " << students[i].height << endl;
        cout << "Gender: " << students[i].gender << endl;
        cout << "Favorite Course: " << students[i].favoriteCourse << endl;
        cout << "Favorite Food: " << students[i].favoriteFood << endl;
        cout << "Favorite Lecture: " << students[i].favoriteLecture << endl;
        cout << "GPA: " << students[i].gpa << endl;

        return 0;
    }
}