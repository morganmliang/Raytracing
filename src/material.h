#ifndef MATERIAL_H
#define MATERIAL_H


#include <rtweekend.h>

struct hit_record;

class material {
    public:
        // pure virtual function 
        // The following class is abstract and cannot be instantiated
        virtual bool scatter(const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered) const = 0;
}

#endif

