#include <iostream>
using namespace std;

int main() {
//LADDERIZE if statement

int grade;
cout << "Enter you grade: ";
cin >> grade;

if (grade == 100 )
{
    cout << "Your Grade is 100 ";
}

else if (grade == 50 )
{
    cout << "Your Grade is 50 ";
}
else if (grade > 40)
{
cout << "Your Grade is Greater then 40";
}
else
{
    cout << "Invalid!!";
}

return 0;
}
