#include "math.h"

int mathUtils::Math::sign(qreal x)
{
	return x > EPS ? 1 : (x < -EPS ? -1 : 0);
}

bool mathUtils::Math::eq(qreal x, qreal y)
{
	return qAbs(x - y) < EPS;
}

int mathUtils::Math::sqr(int x)
{
	return x * x;
}

qreal mathUtils::Math::sqr(qreal x)
{
	return x * x;
}
