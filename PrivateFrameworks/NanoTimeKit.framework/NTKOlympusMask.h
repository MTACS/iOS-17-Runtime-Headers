
@interface NTKOlympusMask : NSObject

+ (double)angleForHour:(unsigned long long)arg1 minutes:(unsigned long long)arg2;
+ (double)angleForMinute:(unsigned long long)arg1 seconds:(unsigned long long)arg2;
+ (id)clippingPathFromCenterPoint:(struct CGPoint { double x1; double x2; })arg1 startAngle:(double)arg2 endAngle:(double)arg3 radius:(double)arg4;
+ (double)convertAngleForFirstQuadrant:(double)arg1;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 translantedFromFirstToQuadrantIndex:(unsigned long long)arg2;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 translantedQuadrantIndex:(unsigned long long)arg2;
+ (struct CGPoint { double x1; double x2; })convertPointFromCartesianCoordiatesToViewCoordiates:(struct CGPoint { double x1; double x2; })arg1 centerFromViewCoordinates:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGPoint { double x1; double x2; })convertPointFromViewCoordinatesToCartesianCoordiates:(struct CGPoint { double x1; double x2; })arg1 centerFromViewCoordinates:(struct CGPoint { double x1; double x2; })arg2;
+ (double)hourHandAngleWithDate:(id)arg1;
+ (double)minuteHandAngleWithDate:(id)arg1;
+ (struct CGPoint { double x1; double x2; })nextPointFromStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3;
+ (unsigned long long)nextQuadrantIndex:(unsigned long long)arg1;
+ (double)normalizeAngle:(double)arg1;
+ (struct CGPoint { double x1; double x2; })pointForAngle:(double)arg1 radius:(double)arg2 centerPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (unsigned long long)quadrantForAngle:(double)arg1;
+ (unsigned long long)quadrantForPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (struct CGPoint { double x1; double x2; })roundPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
