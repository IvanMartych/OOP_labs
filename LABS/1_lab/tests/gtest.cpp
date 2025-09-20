#include <gtest/gtest.h>
#include "../include/replace.h"


// обыная замена каждого второго символа строки 
TEST(test_01, prosto_zamena){
    std::string str = "aaaa aaaa";
    std::string res = "abab abab";
    ASSERT_EQ(replace(str, 2, 'a', 'b'), res);
}

// n = 0
TEST(test_02, n_ravno_0){
    std::string str = "aaaaaaaa";
    std::string res = "aaaaaaaa";
    ASSERT_EQ(replace(str, 0, 'a', 'b'), res);
}

// n < 0
TEST(test_03, n_menshe_0){
    std::string str = "aaaaaaaa";
    std::string res = "aaaaaaaa";
    ASSERT_EQ(replace(str, -1, 'a', 'b'), res);
}

// n = 1
TEST(test_04, n_ravno_1){
    std::string str = "aa aa aa";
    std::string res = "bb bb bb";
    ASSERT_EQ(replace(str, 1, 'a', 'b'), res);
}

// пустая строка 
TEST(test_05, pustaya_stroka){
    std::string str = "";
    std::string res = "";
    ASSERT_EQ(replace(str, 2, 'a', 'b'), res);
}

// значение n больше длины строки
TEST(test_06, n_bolshe_stroki){
    std::string str = "aaa";
    std::string res = "aaa";
    ASSERT_EQ(replace(str, 4, 'a', 'b'), res);
}

// old_value такое же как и new_value 
TEST(test_07, old_value_ravno_new_value){
    std::string str = "123 123";
    std::string res = "123 123";
    ASSERT_EQ(replace(str, 2, '1', '1'), res);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}