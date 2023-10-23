#include <iostream>

class Example {
public:
  Example(int value) {
    value = value;
  }
  
public:
    int value;

  void show() {
    std::cout << "The value is " << value << std::endl;
  };
};

int main() {
  Example example(2);

  example.show();

  return 0;
};