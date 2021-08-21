#include <cmath>

// 2-Component Integer Vector
typedef struct {
	int x;
	int y;
} ivec2;

inline ivec2 int2(int x, int y)
{
	ivec2 vector;
	vector.x = x;
	vector.y = y;
	return vector;
}

inline ivec2 int2f(int x)
{
	return int2(x, x);
}

inline ivec2 add_ivec2(ivec2 vector0, ivec2 vector1)
{
	return int2(vector0.x+vector1.x, vector0.y+vector1.y);
}

inline ivec2 add_ivec2f(ivec2 vector, int x)
{
	return int2(vector.x+x, vector.y+x);
}

inline ivec2 subtract_ivec2(ivec2 vector0, ivec2 vector1)
{
	return int2(vector0.x-vector1.x, vector0.y-vector1.y);
}

inline ivec2 subtract_ivec2f(ivec2 vector, int x)
{
	return int2(vector.x-x, vector.y-x);
}

inline ivec2 multiply_ivec2(ivec2 vector0, ivec2 vector1)
{
	return int2(vector0.x*vector1.x, vector0.y*vector1.y);
}

inline ivec2 multiply_ivec2f(ivec2 vector, int x)
{
	return int2(vector.x*x, vector.y*x);
}

inline ivec2 divide_ivec2(ivec2 vector0, ivec2 vector1)
{
	return int2(vector0.x/vector1.x, vector0.y/vector1.y);
}

inline ivec2 divide_ivec2f(ivec2 vector, int x)
{
	return int2(vector.x/x, vector.y/x);
}

inline ivec2 inegate2(ivec2 vector)
{
	return int2(-vector.x, -vector.y);
}