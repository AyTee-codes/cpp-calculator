#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    
    double num1, num2, result;
    char operation;
    char choice;
    do{
        cout<<"============ CLI CALCULATOR ============\n";
        cout<<"+ Addition\n";
        cout<<"- Subtraction\n";
        cout<<"* Multiplication\n";
        cout<<"/ Division\n";
        cout<<"% Modulus\n";
        cout<<"^ Power\n";
        cout<<"s Square Root\n";
        cout<<"q square\n";
        cout<<"p Percentage\n";

        cout<<"Enter a operation: ";
        cin>>operation;

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                result= num1 + num2;
                break;
            case '-':
                result= num1 - num2;
                break;
            case '*':
                result= num1 * num2;
                break;
            case '/':
                result = num1/num2;
                break;
            case '%':
                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (num2 == 0) {
                cout << "Error: Cannot divide by zero!";
                }
                else {
                result = fmod(num1, num2);
                cout << "Remainder: " << result;
                }
                break;
            case '^':
                cout << "Enter base: ";
                cin >> num1;

                cout << "Enter exponent: ";
                cin >> num2;

                result = pow(num1, num2);

                cout << "Result: " << result;
                break;
            case 's':
                cout << "Enter a number: ";
                cin >> num1;

                if (num1 < 0) {
                cout << "Error: Cannot calculate square root of a negative number.";
                }
                else {
                result = sqrt(num1);
                cout << "Result: " << result;
                }
                break;
            case 'q':
                cout << "Enter a number: ";
                cin >> num1;

                result = num1 * num1;

                cout << "Result: " << result;
                break;
            case 'p':
                cout << "Enter value: ";
                cin >> num1;

                cout << "Enter total: ";
                cin >> num2;

                if (num2 == 0) {
                cout << "Error: Total cannot be zero!";
                }
                else {
                result = (num1 / num2) * 100;
                cout << "Percentage: " << result << "%";
                }
                break;
            default:
                cout << "Invalid choice!";
        }
        cout<<"\nDo you want to continue? (Y/N:)";
        cin>>choice;
        if (choice == 'Y' || choice == 'y' ||
        choice == 'N' || choice == 'n') {
        break;
        }
        cout<<"Invalid choice! Please enter Y or N: ";
    }while (true);

    cout << "Thank you for using CLI Calculator!";




    return 0;
}