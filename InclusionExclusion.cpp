#include <iostream>
using namespace std;

int main() {
    int totalStudents, sports, music, both;

    // Input from user
    cout << "Enter total number of students: ";
    cin >> totalStudents;
    cout << "Enter number of students in Sports Club: ";
    cin >> sports;
    cout << "Enter number of students in Music Club: ";
    cin >> music;
    cout << "Enter number of students in both clubs: ";
    cin >> both;

    // Inclusion-Exclusion Principle calculations
    int atLeastOne = sports + music - both;
    int onlySports = sports - both;
    int onlyMusic = music - both;
    int neither = totalStudents - atLeastOne;

    // Display results
    cout << "\nResults using Inclusion-Exclusion Principle:\n";
    cout << "1. Students in at least one club: " << atLeastOne << endl;
    cout << "2. Students only in Sports Club: " << onlySports << endl;
    cout << "3. Students only in Music Club: " << onlyMusic << endl;
    cout << "4. Students in neither club: " << neither << endl;

    return 0;
}

