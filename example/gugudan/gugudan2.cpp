#include <iostream>
#include <string>

using namespace std;

class Mutiple 
{
public:
    void setGrades(int grade) 
    {
        m_grade = grade;
    }

    void displayResult() 
    {
        for(int i = 1 ; i <= 9 ; i++) 
        {
            cout << m_grade << " X " << i << " = " << m_grade * i << endl;
        }
    }

private:
    int m_grade;
};

int main() 
{
    Mutiple multiple;
    multiple.setGrades(7);
    multiple.displayResult();
    return 0;
}