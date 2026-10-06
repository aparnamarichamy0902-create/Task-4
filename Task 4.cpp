#include <iostream>
using namespace std;
class Stack
{
    string history[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(string page)
    {
        if (top == MAX - 1)
            cout << "Stack Overflow\n";
        else
        {
            top++;
            history[top] = page;
            cout << page << " visited\n";
        }
    }
    void pop()
    {
        if (top == -1)
            cout << "No history available\n";
        else
        {
            cout << "Going back from: " << history[top] << endl;
            top--;
        }
    }
    void display()
    {
        if (top == -1)
            cout << "No history\n";
        else
        {
            cout << "\nBrowser History:\n";
            for (int i = top; i >= 0; i--)
                cout << history[i] << endl;
        }
    }
};
int main()
{
    Stack s;
    s.push("Google.com");
    s.push("Youtube.com");
    s.push("Abcsc.com");
    s.push("Facebook.com");
    s.display();
    cout << "\nPress Back:\n";
    s.pop();
    s.display();
    cout << "\nPress Back again:\n";
    s.pop();
    s.display();
    return 0;
}
