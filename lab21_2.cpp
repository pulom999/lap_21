#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *a,Rect *b){
	double mx1,mx2,mn1,mn2,sum;
	mx1= max(a->x,b->x);
	mn1=min((a->x+a->w),(b->x+b->w));
	mx2=max((a->y-a->h),(b->y-b->h));
	mn2=min(a->y,b->y);
	sum=(mn1-mx1)*(mn2-mx2);
	if(sum<0){
	return 0;
	}else{
	
	return sum;
	}

}