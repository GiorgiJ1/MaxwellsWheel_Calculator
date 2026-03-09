# MaxwellsWheel_Calculator

Here’s a **clean GitHub description** you can use for the repository.

---

## Maxwell's Wheel Physics Calculator (C++)

This is a simple C++ console program that calculates key physical quantities for a **Maxwell's Wheel experiment**. The program uses measured experimental values to compute acceleration and the moment of inertia of the wheel.

The calculator is intended for students performing laboratory work in classical mechanics.

### Features

* Calculates **linear acceleration** using measured height and time
* Calculates **moment of inertia** of the wheel
* Uses standard gravitational acceleration ( g = 9.81 , m/s^2 )
* Simple console interface

### Formulas Used

Acceleration:

a = 2h/t^2

Moment of inertia:

I = mr^2(g/a - 1)

Where:

* (h) — drop height (m)
* (t) — fall time (s)
* (m) — mass of the wheel (kg)
* (r) — axle radius (m)
* (g) — gravitational acceleration (9.81 m/s²)

### How to Compile

```bash
g++ maxwell.cpp
```

### How to Run

```bash
a
```

### Example Input

```
Height: 0.85
Time: 1.34
Mass: 0.45
Radius: 0.02
```

### Output

```
Acceleration a = ...
Moment of inertia I = ...
```

### Purpose

This program was created to assist with calculations in a **Maxwell's Wheel laboratory experiment**, commonly used to study rotational motion and moment of inertia.

---

If you want, I can also give you a **really nice GitHub README version** with:

* badges
* physics diagrams
* clean formatting
* looks like a **serious engineering repo**

which actually helps **a lot when recruiters or professors look at your GitHub**.
