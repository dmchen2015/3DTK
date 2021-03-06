/*
 * rotation3d.cc
 *
 *  Created on: Feb 16, 2012
 *      Author: Remus Claudiu Dumitru <r.dumitru@jacobs-university.de>
 */

#include "floorplan/rotation3d.h"

floorplan::Rotation3d::Rotation3d(const Rotation3d& other) {
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;
}

floorplan::Rotation3d& floorplan::Rotation3d::operator=(const Rotation3d& other) {
    if (this != &other) {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
    }

    return *this;
}

floorplan::Rotation3d floorplan::Rotation3d::getInverse() {
    return Rotation3d(-this->x, -this->y, -this->z);
}
