#include <iostream>
using namespace std;
class Stack {
  // user defiend data structure
public:
  int arr[5];
  int idx;
  Stack() { idx = -1; }
  void push(int val) {
    if (idx == sizeof(arr) / sizeof(arr[0] - 1)) {
      cout << "Stack is Full!"
           << " ";
      return;
    }
    idx++;
    arr[idx] = val;
  }
  void pop() {

    if (idx == -1) {
      cout << "Stack is EMPTY!"
           << " ";
      return;
    }
    idx--;
  }
  int top() {
    if (idx == -1) {
      cout << "Stack is EMPTY!"
           << " ";
      return -1;
    }
    return arr[idx];
  }
  int size() { return idx + 1; }
};
int main() {
  Stack st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout << st.top() << endl;
  cout << st.size() << endl;
  st.pop();
  cout << st.size() << endl;
  cout << st.top() << endl;
}