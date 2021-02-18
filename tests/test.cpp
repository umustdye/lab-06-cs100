#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

// RECTANGLE AREA TESTING
TEST(AreaTest, ZeroArea) {
    //Initialize
    Rectangle a, b, c;

    //Act
    a.set_width(5);
    a.set_height(0);
    b.set_width(0);
    b.set_height(27);
    c.set_width(0);
    c.set_height(0);

    //Assert
    EXPECT_EQ(a.area(), 0);
    EXPECT_EQ(b.area(), 0);
    EXPECT_EQ(c.area(), 0);
}

TEST(AreaTest, NegativeArea) {
    //Initialize
    Rectangle a, b, c;

    //Act
    a.set_width(5);
    a.set_height(-1);
    b.set_width(-45);
    b.set_height(12);
    c.set_width(-3);
    c.set_height(-4);

    //Assert
    EXPECT_EQ(a.area(), 0);
    EXPECT_EQ(b.area(), 0);
    EXPECT_EQ(c.area(), 0);
}

TEST(AreaTest, PositiveArea) {
    //Initialize
    Rectangle a, b, c;

    //Act
    a.set_width(5);
    a.set_height(1);
    b.set_width(4);
    b.set_height(12);
    c.set_width(3);
    c.set_height(4);

    //Assert
    EXPECT_EQ(a.area(), 5);
    EXPECT_EQ(b.area(), 48);
    EXPECT_EQ(c.area(), 12);

}

// RECTANGLE PERIMETER TESTING
TEST(PerimeterTest, ValidRectangle) {
    //Initialize
    Rectangle a(1, 2), b(5, 10), c(6, 17);

    //Assert
    EXPECT_EQ(a.perimeter(), 6);
    EXPECT_EQ(b.perimeter(), 30);
    EXPECT_EQ(c.perimeter(), 46);
}

TEST(PerimeterTest, NegativeParameters) {
    //Initialize
    Rectangle a(10, -1), b(-10, 1);

    //Assert
    EXPECT_EQ(a.perimeter(), 0);
    EXPECT_EQ(b.perimeter(), 0);
}

TEST(PerimeterTest, ZeroParameters) {
    //Initialize
    Rectangle a(10, 0), b(0, 1);

    //Assert
    EXPECT_EQ(a.perimeter(), 0);
    EXPECT_EQ(b.perimeter(), 0);
}

// RECTANGLE CONSTRUCTOR TESTING
TEST(ConstructorTest, ValidRectangle) {
    //Initialize
    Rectangle a(12, 25);
    Rectangle b;

    //Act
    b.set_width(12);
    b.set_height(25);

    //Assert
    EXPECT_EQ(a.area(), b.area());
    EXPECT_EQ(a.perimeter(), b.perimeter());
}

TEST(ConstructorTest, ZeroRectangle) {
    //Initialize
    Rectangle a(0, 25);
    Rectangle b;

    //Act
    b.set_width(0);
    b.set_height(25);

    //Assert
    EXPECT_EQ(a.area(), b.area());
    EXPECT_EQ(a.perimeter(), b.perimeter());
}

TEST(ConstructorTest, NegativeRectangle) {
    //Initialize
    Rectangle a(-12, 25);
    Rectangle b;

    //Act
    b.set_width(-12);
    b.set_height(25);

    //Assert
    EXPECT_EQ(a.area(), b.area());
    EXPECT_EQ(a.perimeter(), b.perimeter());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
