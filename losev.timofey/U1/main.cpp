#include <iostream>
#include <string>

namespace losev
{
  struct Person
  {
    size_t id;
    std::string info;
  };

  struct Node
  {
    Person data;
    Node* next;
  };
}

int main()
{
  return 0;
}
