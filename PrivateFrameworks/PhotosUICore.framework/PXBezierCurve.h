
@interface PXBezierCurve : NSObject {
    void _ctrlP1;
    void _ctrlP2;
    void _endP;
    void _startP;
}

- (id)initWithStartingPoint:(struct { double x1; double x2; double x3; })arg1 controlPoint1:(struct { double x1; double x2; double x3; })arg2 controlPoint2:(struct { double x1; double x2; double x3; })arg3 endPoint:(struct { double x1; double x2; double x3; })arg4;
- (struct { double x1; double x2; double x3; })positionOnCurveAtFraction:(double)arg1;

@end
