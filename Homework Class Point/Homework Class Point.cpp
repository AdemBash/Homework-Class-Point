#include <iostream>

class Point {
private:
    int x, y;
    static int count;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {
        count++;
    }

    ~Point() {
        count--;
    }

    static int getCount() {
        return count;
    }
};

int Point::count = 0;

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    std::cout << "Количество созданных объектов: " << Point::getCount() << std::endl; 

    {
        Point p3(5, 6);
        std::cout << "Количество созданных объектов: " << Point::getCount() << std::endl;
    }

    std::cout << "Количество оставшихся объектов: " << Point::getCount() << std::endl; 
}
