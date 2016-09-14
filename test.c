#include <stdlib.h>
#include <check.h>
#include "fatorial/check_fatorial.h"

int main() {
  int number_of_failed_tests = 0;
  Suite *suite;
  SRunner *suite_runner;

  suite = fatorial_suite();
  suite_runner = srunner_create(suite);

  srunner_run_all(suite_runner, CK_NORMAL);
  number_of_failed_tests = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  return (number_of_failed_tests == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
