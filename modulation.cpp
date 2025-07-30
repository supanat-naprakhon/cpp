// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;//
int main() {
    cout << "Calculator" << endl;
    cout << "--------------------------" << endl;
    int op,num1,num2;
    cin >> op;
    if(op==1) {
            cout << "Adder function" << endl;
            // num1
            cout << "Enter num1 : ";
            cin >> num1;
            cout << endl;
            // num2
            cout << "Enter num2 : ";
            cin >> num2;
            cout << endl;
            cout << "-------------------" << endl;
            cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
            
    }else if (op==2) {
                // num1
            cout << "Enter num1 : ";
            cin >> num1;
            cout << endl;
            // num2
            cout << "Enter num2 : ";
            cin >> num2;
            cout << endl;
            cout << "-------------------" << endl;
            cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
        cout << "Subtract function" << endl;
    }else if (op==3) {
             // num1
            cout << "Enter num1 : ";
            cin >> num1;
            cout << endl;
            // num2
            cout << "Enter num2 : ";
            cin >> num2;
            cout << endl;
            cout << "-------------------" << endl;
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
    }else if (op==4) {
            // num1
            cout << "Enter num1 : ";
            cin >> num1;
            cout << endl;
            // num2
            cout << "Enter num2 : ";
            cin >> num2;
            cout << endl;
            cout << "-------------------" << endl;
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    }else if (op==5) {
        // num1
            cout << "Enter num1 : ";
            cin >> num1;
            cout << endl;
            // num2
            cout << "Enter num2 : ";
            cin >> num2;
            cout << endl;
            cout << "-------------------" << endl;
            cout << num1 << " % " << num2 << " = " << num1/num2 << endl;
    }else{
        cout << "Invalid data!" << endl;
    }
    return 0;
}
