 STUDENT MANAGEMENT USING C++
#include <iostream>
using namespace std;
class Student {
private:
 int rollNo;
 char *name;
 float *marks;
public:
 char **ptr=&name;
public:
 // Constructor
 Student() {
 name = (char*)malloc(30 * sizeof(char)); // Allocate memory for name
 marks = (float*)calloc(3, sizeof(float)); // Allocate memory for 3 subject
marks
 }
 // Function to set data using user input
 void inputData() {
 cout << "Enter Roll Number: ";
 cin >> rollNo;
 cout << "Enter Name: ";
 cin.ignore(); // To ignore leftover newline
 cin.getline(name, 30); // Read name into allocated memory
 cout << "Enter marks for 3 subjects:\n";
 for (int i = 0; i < 3; i++) {
 cout << "Subject " << i + 1 << ": ";
 cin >> marks[i];
 }
 }
 // Function to display student data
 void displayData() {
 cout << "\n--- Student Details ---\n";
 cout << "Roll Number: " << rollNo << endl;
 cout << "Name: " << name << endl;
 cout << "Marks: ";
 for (int i = 0; i < 3; i++) {
 cout << marks[i] << " ";
 }
 float avg = (marks[0] + marks[1] + marks[2]) / 3;
 cout << "\nAverage Marks: " << avg << endl;
 cout<<"address of name:"<<ptr<<endl;
 }
 // Destructor to free memory
 ~Student() {
 free(name);
 free(marks);
 }
};
int main() {
 Student s;
 s.inputData(); // Input from user
 s.displayData(); // Display student data
 return 0;
}
 
