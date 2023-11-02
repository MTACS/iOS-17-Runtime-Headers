
@interface CDCurvedRoundedRectShapeLayer : CAShapeLayer

- (struct CGPoint { double x1; double x2; })_findCircleLineIntersectionWithOffset:(double)arg1 cornerRadiusOffset:(double)arg2 radius:(double)arg3 slope:(double)arg4;
- (struct CGPoint { double x1; double x2; })_findIntersectionOfCircle:(struct CGPoint { double x1; double x2; })arg1 cornerRadius:(double)arg2 offset:(double)arg3;
- (double)_findNewOffsetOfParalelLineWithSlope:(double)arg1 offset:(double)arg2 distanceFrom:(double)arg3;
- (double)_findPointOfIntersectionBetweenCircleOfRadius:(double)arg1 slope:(double)arg2 offset:(double)arg3;
- (struct CGPoint { double x1; double x2; })_findPointThatIsDistance:(double)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 onSlope:(double)arg3 offset:(double)arg4;
- (struct CGPoint { double x1; double x2; })_getMirroredPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_midPointOfPoint1:(struct CGPoint { double x1; double x2; })arg1 point2:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })_pointAtAngle:(double)arg1 radius:(double)arg2;
- (id)initWithAngularWidth:(double)arg1 innerRadius:(double)arg2 outerRadius:(double)arg3 cornerRadius:(double)arg4;
- (id)initWithAngularWidth:(double)arg1 innerRadius:(double)arg2 outerRadius:(double)arg3 cornerRadius:(double)arg4 style:(long long)arg5;
- (id)initWithAngularWidth:(double)arg1 innerRadius:(double)arg2 outerRadius:(double)arg3 cornerRadius:(double)arg4 style:(long long)arg5 gapAngle:(double)arg6;

@end
