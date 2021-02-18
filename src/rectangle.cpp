#include "../header/rectangle.hpp"
#include <algorithm>

using std::max;

Rectangle::Rectangle()
{
    this->width = 0;
    this->height = 0;
}

Rectangle::Rectangle(int w, int h)
{
    set_width(w);
    set_height(h);
}

void Rectangle::set_width(int w)
{
    this->width = max(0, w);
}

void Rectangle::set_height(int h)
{
    this->height = max(0, h);
}

int Rectangle::area()
{
    return this->width * this->height;
}

int Rectangle::perimeter()
{
    if(width == 0 || height == 0)
    {
        return 0;
    }
    else
    {
        return (this->width*2) + (this->height*2);
    }
}
