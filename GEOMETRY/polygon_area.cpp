#include "geometry.h"

// p eh um vetor de pontos

// a area eh calculada a partir do determinante da matriz 
// com os pontos
ld area_polygon(vector<Point> p){
	ld result = 0.0, x1, y1, x2, y2;
	for(int i=0; i<(int)p.size(); i++){
		int j = (i+1)%(int)p.size();
		x1 = p[i].x;
		x2 = p[j].x;
		y1 = p[i].y;
		y2 = p[j].y;
		result += (x1*y2 - x2*y1);
	}

	return fabs(result/2.0);
}
