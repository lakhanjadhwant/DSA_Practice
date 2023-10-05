#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack; // Create an empty stack of integers

    int choice;
    int element;

    do {
        // Display menu
        std::cout << "Stack Menu:" << std::endl;
        std::cout << "1. Push an element" << std::endl;
        std::cout << "2. Pop an element" << std::endl;
        std::cout << "3. Display the top element" << std::endl;
        std::cout << "4. Check if the stack is empty" << std::endl;
        std::cout << "5. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Push an element onto the stack
                std::cout << "Enter the element to push: ";
                std::cin >> element;
                myStack.push(element);
                std::cout << element << " pushed onto the stack." << std::endl;
                break;

            case 2:
                // Pop an element from the stack
                if (!myStack.empty()) {
                    element = myStack.top();
                    myStack.pop();
                    std::cout << "Popped element: " << element << std::endl;
                } else {
                    std::cout << "Stack is empty. Cannot pop." << std::endl;
                }
                break;

            case 3:
                // Display the top element of the stack
                if (!myStack.empty()) {
                    element = myStack.top();
                    std::cout << "Top element: " << element << std::endl;
                } else {
                    std::cout << "Stack is empty." << std::endl;
                }
                break;

            case 4:
                // Check if the stack is empty
                if (myStack.empty()) {
                    std::cout << "Stack is empty." << std::endl;
                } else {
                    std::cout << "Stack is not empty." << std::endl;
                }
                break;

            case 5:
                // Quit the program
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
