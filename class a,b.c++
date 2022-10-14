#include <iostream>

using namespace std;

class student_grades{
private:
    string name,n;
    int Id,i;
    double* grades[];

public:
    student_grades();

    student_grades(sting, int);

    student_grades(const student_grades&);

    void set(string name,int Id){
        cout << "enter the name and the ID";
        cin >> n >> i;
        n = name;
        i = Id;
    }

    void get(){
        return i;
        return n;
    }

    void student_grades (student_grades&opr){
        name = name.opr;
        Id = Id.opr;
        grades[] = grades[].opr;
    }

    void student_info(){
        cout << "the name of the student is:" << name;
        cout << "the id for the srudent is:" << Id;
        grades = new double[];
        cout << "the grades of the student is:" << grades[] << endl;
        delete []grades;
    }

};

student_grades::student_grades() {}

student_grades::student_grades(string name, int Id) {
    name=" ";
    Id=0;
}

student_grades::student_grades(const student_grades& copy) {
    name=copy.name;
    Id=copy.Id;
}

int main() {

    student_grades std1;
    std1.set();
    cin >> std1.grades[5];
    std1.get();

    student_grades std2;
    std2.set();
    cin >> std2.grades[6];
    std2.get();

    student_grades std3;
    std3.set();
    cin >> std3.grades[4];
    std3.get();

    student_grades std4;
    std4.set();
    cin >> std4.grades[];
    std4.get();

    std1 = std3;
    std2 = std4;

    cout << std1 << std2 << std3 << std4;

    return 0;
}
