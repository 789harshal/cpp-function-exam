#include<iostream>
using namespace std;

int main(){

    int choice;

    cout << "enter your choice :" << endl;
    cout << "press 1 for Addition :" << endl;
    cout << "press 2 for substraction :" << endl;
    cout << "press 3 for multiplication :" << endl;
    cout << "press 4 for division :" << endl;

    cout << "enter your choice : ";
    cin >> choice;

    do{
        switch (choice)
        {
            case 1:
                int n1,n2,sum;
                cout << "enter your first number : ";
                cin >> n1;
                cout << "enter your first number : ";
                cin >> n2;

                sum = n1 + n2;

                cout << "Addition of" << " "  << n1 << " "  << "and" << " " << n2 << " " << "is" <<  sum;

            break;
            case 2:
                int s1,s2,sub;
                cout << "enter your first number : ";
                cin >> n1;
                cout << "enter your first number : ";
                cin >> n2;

                sub = s1 - s2;

                cout << "Addition of" << " "  << s1 << " "  << "and" << " " << s2 << " " << "is" <<  sum;

            break;
            case 3:
                int m1,m2,mul;
                cout << "enter your first number : ";
                cin >> n1;
                cout << "enter your first number : ";
                cin >> n2;

                mul = m1 * m2;

                cout << "Addition of" << " "  << m1 << " "  << "and" << " " << m2 << " " << "is" <<  sum;

            break;
            case 4:
                int d1,d2,divi;
                cout << "enter your first number : ";
                cin >> n1;
                cout << "enter your first number : ";
                cin >> n2;

                divi = d1 / d2;

                cout << "Addition of" << " "  << d1 << " "  << "and" << " " << d2 << " " << "is" <<  sum;

            break;
        
        default:
            cout << "undefind choice";
            break;
        }

    } while (choice != 5);
    


    return 0;
}