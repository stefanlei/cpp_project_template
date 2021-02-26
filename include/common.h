#include <string>

class People {
 public:
  People();
  ~People();

 private:
  std::string name = "stefanlei";

  int16_t age = 18;

 public:
  std::string get_name();
  int16_t get_age();
};