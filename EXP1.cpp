#include <iostream>
using namespace std;
class student{
    private:
        int RollNo;
        string Name;
    public:
        student (int r, string n)
        {
            RollNo = r;
            Name = n;
            cout << "student object created" << endl;
        }
        void display(){
            cout << "Roll number:" << RollNo << endl;
            cout << "Name:" << Name << endl; 
        }
        ~student(){
            cout << "student object destroyed" << endl;
        }
    };
int main (){
    string name;
    int rollno;
    cout << "Enter the name;";
    cin >> name;
    cout << "Enter the roll number;" ;
    cin >> rollno;
    student s1(rollno,name);
    s1.display();
    return 0;
}