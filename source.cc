#include "TestingConfig.h"
#include <iostream>
#include <thread>

void task(const int &num)
{
  for(int i = 0; i < 30; ++i)
    std::cout << "Task" << num << ": " << i << std::endl;
}

int main(int argc, char* argv[])
{
  std::cout << "Version Number: " << Testing_VERSION_MAJOR << "." << Testing_VERSION_MINOR << std::endl << std::endl;
  
  std::thread t0(task, 0);
  std::thread t1(task, 1);
  std::thread t2(task, 2);
  std::thread t3(task, 3);
  std::thread t4(task, 4);
  std::thread t5(task, 5);
  std::thread t6(task, 6);
  std::thread t7(task, 7);

  t0.join();
  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();
  t6.join();
  t7.join();

  return 0;
}
