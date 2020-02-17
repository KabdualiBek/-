from fractions import Fraction
coords = [Fraction(i) for i in input().split(' ')]
x0, y0, x1, y1, x2, y2 = coords
# parabola
if y0**2 / x0 == y1**2 / x1 == y2**2 / x2:
    print('parabola')
# hyperbole and ellipse
a2 = ((x0*y1)**2 - (x1*y0)**2) / (y1**2 - y0**2)
if a2 == ((x0*y2)**2 - (x2*y0)**2) / (y2**2 - y0**2) == ((x2*y1)**2 - (x1*y2)**2) / (y1**2 - y2**2):
    b2 = ((x0*y1)**2 - (x1*y0)**2) / (x1**2 - x0**2)
    if b2 == ((x0*y2)**2 - (x2*y0)**2) / (x2**2 - x0**2) == ((x2*y1)**2 - (x1*y2)**2) / (x1**2 - x2**2):
        if b2 >= 0:
            print('hyperbole')
        if b2 <= 0:
            print('ellipse')
