#define EXECUTE_TEST(test)                                                                                                                                           \
   std::cout << "───────────────────────────────────────────────\n";                                                                                                 \
   std::cout << "Test: " << #test << "\n";                                                                                                                           \
   std::cout << "───────────────────────────────────────────────\n";                                                                                                 \
   std::cout << "Test output:\n";                                                                                                                                    \
   all++;                                                                                                                                                            \
   std::cout << "───────────────────────────────────────────────\n";                                                                                                 \
   if (test())                                                                                                                                                       \
   {                                                                                                                                                                 \
      std::cout << "───────────────────────────────────────────────\n" \
                << "Test passed\n";                                                                                                                                  \
      passed++;                                                                                                                                                      \
   }                                                                                                                                                                 \
   else                                                                                                                                                              \
   {                                                                                                                                                                 \
      std::cout << "Test failed\n";                                                                                                                                  \
      isFailed = true;                                                                                                                                               \
      failed++;                                                                                                                                                      \
   }                                                                                                                                                                 \
   std::cout << "───────────────────────────────────────────────\n\n";

#include <iostream>
#include "tests.h"

int main()
{
   bool isFailed = false;
   int passed = 0;
   int failed = 0;
   int all = 0;

   // key expansion
   EXECUTE_TEST(t_demo_test)
   EXECUTE_TEST(t_lfsr)

   std::cout << "Testing done\n";
   std::cout << "───────────────────────────────────────────────\n";
   std::cout << "Tests executed : " << all << "\n";
   std::cout << "Tests passed   : " << passed << "\n";
   std::cout << "Tests failed   : " << failed << "\n";
   std::cout << "───────────────────────────────────────────────\n";

   if (isFailed)
      return 1;
   else
      return 0;
}