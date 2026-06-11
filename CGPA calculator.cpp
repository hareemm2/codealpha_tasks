#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    string grade;
    float creditHours, gradePoint;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter letter grade (A, A-, B+, B, B-, C+, C, C-, D, F): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> creditHours;

        // Convert letter grade to grade point
        if (grade == "A")
            gradePoint = 4.00;
        else if (grade == "A-")
            gradePoint = 3.67;
        else if (grade == "B+")
            gradePoint = 3.33;
        else if (grade == "B")
            gradePoint = 3.00;
        else if (grade == "B-")
            gradePoint = 2.67;
        else if (grade == "C+")
            gradePoint = 2.33;
        else if (grade == "C")
            gradePoint = 2.00;
        else if (grade == "C-")
            gradePoint = 1.67;
        else if (grade == "D")
            gradePoint = 1.00;
        else
            gradePoint = 0.00; // F

        totalCredits += creditHours;
        totalGradePoints += gradePoint * creditHours;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << " / 4.00" << endl;

    return 0;
}
