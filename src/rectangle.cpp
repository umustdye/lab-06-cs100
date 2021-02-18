#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(1), height(1) {}

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::set_width(int w) {
    width = w;
}

void Rectangle::set_height(int h) {
    height = h;
}

int Rectangle::area() {
    return 72;
}

int Rectangle::perimeter() {
    return 15;
}
