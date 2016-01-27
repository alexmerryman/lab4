#include "eecs230.h"

struct point {
    double x;
    double y;
};

struct LineSegment {
    point pt1;
    point pt2;
};

LineSegment addition(point pt1, point pt2) {
    double x_coord_add = pt1.x + pt2.x;
    double y_coord_add = pt1.y + pt2.y;
    LineSegment VecAdd(double x_coord_add, double y_coord_add);
};

LineSegment subtraction(point pt1, point pt2) {
    double x_coord_sub = pt1.x - pt2.x;
    double y_coord_sub = pt1.y - pt2.y;
    LineSegment VecSub(double x_coord_sub, double y_coord_sub);
};

int main()
try
{
    point pt1;
    point pt2;
    pt1.x = 0;
    pt1.y = 0;
    pt2.x = 1;
    pt2.y = 1;
}

catch (runtime_error& e) {
    cerr << "Caught in main: " << e.what() << "\n";
    exit(1);
}