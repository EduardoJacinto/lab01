 #include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest,EduardoIsCool) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "Eduardo"; test_val[2] = "is"; test_val[3] = "cool";
    EXPECT_EQ("Eduardo is cool", echo(4,test_val));
}
TEST(EchoTest,7 ){
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "7"; 
    EXPECT_EQ("7", echo(2,test_val));
}
TEST(EchoTest, numbers ){
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "30"; 
    EXPECT_EQ("30", echo(2,test_val));
  
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
