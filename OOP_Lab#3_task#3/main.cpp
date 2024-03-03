#include <iostream>
#include <vector>
#include <string>
#include "StudentManager.h"
using namespace std;

int main() {
    StudentManager student ;
    student.addStudent(1, "hashir", 92.5);
    student.addStudent(2, "asim", 88.0);
    student.displayRecords();
    student.updateGrade(2, 95.0);
    cout << "After grade update:" << endl;
    student.displayRecords();

    return 0;
}
