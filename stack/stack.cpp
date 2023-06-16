#include <iostream>
#include<string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) { // step 1
			cout << "Number of data eceeds the limit" << endl;
			return 0;
		}

		top++; //step 2
		stack_array[top] = element; //step 3 
		cout << endl;
		cout << element << "ditambah(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nstack is empty cannot pop " << endl;
			return; //1.b
		}
		cout << "\nThe popped element is " << stack_array[top] << endl; //step 2
		top--; // step 3
	}

	//method for check if data is empty 
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nstack is empty" << endl;
		}

		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[top] << endl;
			}
		}
	}

};

int main() {
	StackArray s;
	char ch;
