// #include "tests.h"

// START_TEST(test_set_bits_1) {
//   s21_decimal bits = {{0, 0, 0, 0}};
//   s21_set_bits(&bits, 5);
//   s21_decimal_to_big(bits, &big_bits);
//   ck_assert_int_eq(s21_get_bits(big_bits, 5), 1);
// }
// END_TEST

// START_TEST(test_set_bits_2) {
//   big_decimal big_bits = {{5, 0, 0, 0, 0, 0, 0}};
//   s21_decimal bits = {{5, 0, 0, 0}};
//   s21_set_bits(&bits, 1);
//   s21_decimal_to_big(bits, &big_bits);
//   ck_assert_int_eq(s21_get_bits(big_bits, 1), 1);
// }
// END_TEST

// START_TEST(test_set_bits_3) {
//   big_decimal big_bits = {{0, 0, 0, 0, 0, 0, 0}};
//   s21_decimal bits = {{0, 0, 0, 0}};
//   s21_set_bits(&bits, 1);
//   s21_decimal_to_big(bits, &big_bits);
//   ck_assert_int_eq(s21_get_bits(big_bits, 1), 1);
// }
// END_TEST

// START_TEST(test_set_bits_4) {
//   big_decimal bits = {{0, 1, 0, 0}};
//   s21_set_bits(&bits, 33);
//   ck_assert_int_eq(s21_get_bits(bits, 33), 1);
// }
// END_TEST

// START_TEST(test_set_bits_3) {
//   big_decimal big_bits = {{0, 0, 0, 0, 0, 0, 0}};
//   s21_decimal bits = {{0, 0, 0, 0}};
//   s21_set_bits(&bits, 1);
//   s21_decimal_to_big(bits, &big_bits);
//   ck_assert_int_eq(s21_get_bits(big_bits, 1), 1);
// }
// END_TEST

// START_TEST(test_set_bits_5) {
//   big_decimal bits = {{0, 1, 1, 0}};
//   s21_set_bits(&bits, 52);
//   ck_assert_int_eq(s21_get_bits(bits, 52), 1);
// }
// END_TEST

// START_TEST(test_set_bits_autotest_1) {
//   big_decimal bits = {{0}};
//   for (int i = 0; i < 32; i++) {
//     s21_set_bits(&bits, i);
//     ck_assert_int_eq(s21_get_bits(bits, i), 1);
//   }
// }
// END_TEST

// START_TEST(test_set_bits_autotest_2) {
//   big_decimal bits = {{0xFFFFFFFF, 0, 0, 0}};
//   for (int i = 32; i < 128; i++) {
//     s21_set_bits(&bits, i);
//     ck_assert_int_eq(s21_get_bits(bits, i), 1);
//   }
// }
// END_TEST

// Suite* s21_set_bits_suite(void) {
//   Suite* s = suite_create("s21_set_bits");
//   TCase* tc_core = tcase_create("core");

//   tcase_add_test(tc_core, test_set_bits_1);
//   tcase_add_test(tc_core, test_set_bits_2);
//   tcase_add_test(tc_core, test_set_bits_3);
//   tcase_add_test(tc_core, test_set_bits_4);
//   tcase_add_test(tc_core, test_set_bits_5);
//   tcase_add_test(tc_core, test_set_bits_autotest_1);
//   tcase_add_test(tc_core, test_set_bits_autotest_2);

//   suite_add_tcase(s, tc_core);
//   return s;
// }
