#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

#define PI 3.1415

class Ball {
public:
	Ball(const Point &cen, const Velocity &vel, const Color &col,
			double rad, bool isColl);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
private:
    Point center;
	Velocity velocity;	
	Color color;
    double radius;
	bool isCollidable;
};
