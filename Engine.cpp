#include <iostream>
#include <cmath>

const double GRAVITY = 9.8; // m/s^2

class Object {
public:
    double mass;
    double position;
    double velocity;
    double acceleration;

    Object(double m, double p, double v) {
        mass = m;
        position = p;
        velocity = v;
        acceleration = -GRAVITY;
    }

    void update(double dt) {
        velocity += acceleration * dt;
        position += velocity * dt;
    }
};

int main() {
    double dt = 0.01; // time step (s)
    double time = 0;
    Object obj(1, 0, 0);

    while (obj.position >= 0) {
        std::cout << "Time: " << time << " s" << std::endl;
        std::cout << "Position: " << obj.position << " m" << std::endl;
        std::cout << "Velocity: " << obj.velocity << " m/s" << std::endl;
        std::cout << "Acceleration: " << obj.acceleration << " m/s^2" << std::endl;
        std::cout << std::endl;

        obj.update(dt);
        time += dt;
    }

    return 0;
}
