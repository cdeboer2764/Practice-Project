#include <iostream>
using namespace std;

int main()
{
	while(true){
    cout << "Enter first and second numbers: ";
    float number;
    float number2;
    cin >> number >> number2; 
    
    std::string op;
    cout << "Enter your operand: ";
    cin >> op;
    
    int final_num;

    if(op == "+")
    {
        final_num = number + number2;
    }
    else if(op == "-")
    {
	final_num = number - number2;
    }
    else if(op == "*")
    {
	final_num = number * number2;
    }
    else if(op == "/")
    {
	final_num = number / number2;
    }
    else if(op == "q")
    {
	cout << "Quitting calculator";
	break;
    }
    else
    {
	cout << "Operand not recognized";
	return 1;
    }
	cout << final_num << "\n";
	}

    return 0;
}
