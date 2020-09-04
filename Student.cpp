#include <iostream>

class Student{
    private:
    double Student1;
    double student2;
    double student3;
    double student4;
    double student5;

    // Constructor
    public:
    Student(double aStudent1, double astudent2, double astudent3, double astudent4, double astudent5){
        this-> Student1= aStudent1;
        this->student2= astudent2;
        this->student3= astudent3;
        this->student4= astudent4;
        this->student5= astudent5;
    }

    //Getter
    double getgrade() { return Student1; }
    double getgrade() { return student2; }
    double getgrade() { return student3; }
    double getgrade() { return student4; }
    double getgrade() { return student5; }

    //Setter
    void setgrade(double aStudent1, double astudent2, double astudent3, double astudent4, double astudent5){

        this->Student1= aStudent1;
        this->student2= astudent2;
        this->student3= astudent3;
        this->student4= astudent4;
        this->student5= astudent5;
    }




};