#include <check.h>
#include "fatorial.h"

START_TEST(test_fatorial_1) {
  ck_assert_int_eq(120, fatorial(5));
} END_TEST

START_TEST(test_fatorial_2) {
  ck_assert_int_eq(1, fatorial(0));
} END_TEST

Suite *fatorial_suite() {
  Suite *suite;
  TCase *test_case;

  suite = suite_create("Fatorial");
  test_case = tcase_create("Core");

  tcase_add_test(test_case, test_fatorial_1);
  tcase_add_test(test_case, test_fatorial_2);
  suite_add_tcase(suite, test_case);

  return suite;
}
