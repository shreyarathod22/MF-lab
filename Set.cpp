#include<iostream>
using namespace std;
int main() {
    int i, j;
    //Taking input of number of student in Universal Set
    int s;
    cout << "Enter number of students in Universal set (all students): ";
    cin >> s;
    int U[s];
    cout << "Enter roll numbers of all students:\n";
    for(i = 0; i < s; i++) {
        cin >> U[i];
    }
    int a;
    cout << "Enter number of students in Drama Club (Set A): ";
    cin >> a;
    int A[a];
    cout << "Enter roll numbers of Drama Club members:\n";
    for(i = 0; i < a; i++) {
        cin >> A[i];
    }
    int b;
    cout << "Enter number of students in Science Club (Set B): ";
    cin >> b;
    int B[b];
    cout << "Enter roll numbers of Science Club members:\n";
    for(i = 0; i < b; i++) {
        cin >> B[i];
    }
    // UNION   (Students in at least one club (A ∪ B))
    int unionSet[s];  
    int uSize = 0;
    for(i = 0; i < a; i++) {
        unionSet[uSize++] = A[i];
    }
    for(i = 0; i < b; i++) {
        bool found = false;
        for(j = 0; j < a; j++) {
            if(B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            unionSet[uSize++] = B[i];
        }
    }
    cout << "\nStudents in at least one club (A ∪ B):\n";
    for(i = 0; i < uSize; i++) {
        cout << unionSet[i] << " ";
    }
    //    INTERSECTION   (Students in both clubs (A ∩ B))
    cout << "\n\nStudents in both clubs (A ∩ B):\n";
    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            if(A[i] == B[j]) {
                cout << A[i] << " ";
                break;
            }
        }
    }
    //    DIFFERENCE    (Students in Drama Club only (A - B))
    cout << "\n\nStudents in Drama Club only (A - B):\n";
    for(i = 0; i < a; i++) {
        bool found = false;
        for(j = 0; j < b; j++) {
            if(A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << A[i] << " ";
        }
    }
    //      DIFFERENCE (Students in Science Club only  (B - A))
    cout << "\n\nStudents in Science Club only (B - A):\n";
    for(i = 0; i < b; i++) {
        bool found = false;
        for(j = 0; j < a; j++) {
            if(B[i] == A[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << B[i] << " ";
        }
    }
    //     COMPLEMENT   (Students not in any club (U - (A ∪ B)))
    cout << "\n\nStudents not in any club (U - (A ∪ B)):\n";
    for(i = 0; i < s; i++) {
        bool found = false;
        for(j = 0; j < uSize; j++) {
            if(U[i] == unionSet[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << U[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
