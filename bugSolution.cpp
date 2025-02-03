int main() {
  int* ptr = nullptr;
  int value = 0;

  // Allocate memory before dereferencing
  ptr = new int;
  if (ptr != nullptr) {
    *ptr = 10; // Dereferencing a valid pointer
    value = *ptr;
    delete ptr; // Release allocated memory
    ptr = nullptr; // Good practice to set it to nullptr after deletion.
  } else {
    std::cerr << "Memory allocation failed!\n";
  }
  std::cout << value << std::endl;
  return 0;
}