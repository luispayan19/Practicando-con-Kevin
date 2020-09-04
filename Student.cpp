#include <iostream>
using namespace std;
class Student{
    private:
    double Student1;
    double student2;
    double student3;
    double student4;
    double student5;
    public:
    Student(){
    
    }
    
    //Getter
    double getgrade1() { return Student1; }
    double getgrade2() { return student2; }
    double getgrade3() { return student3; }
    double getgrade4() { return student4; }
    double getgrade5() { return student5; }

    //Setter
    void setgrade(double aStudent1, double astudent2, double astudent3, double astudent4, double astudent5){

        this->Student1= aStudent1;
        this->student2= astudent2;
        this->student3= astudent3;
        this->student4= astudent4;
        this->student5= astudent5;
    }
};

int main(){
 double student1,student2,student3,student4,student5;
cin >> student1 >> student2 >> student3 >> student4 >> student5;

Student st;
st.setgrade(student1, student2, student3, student4, student5);
cout << st.getgrade1() + st.getgrade2() + st.getgrade3() + st.getgrade4() +st.getgrade5();


}