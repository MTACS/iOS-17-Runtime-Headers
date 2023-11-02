
@interface _MKJunctionElement : NSObject {
    double  _angle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftBasePoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightBasePoint;
}

@property (nonatomic) double angle;
@property (nonatomic) struct CGPoint { double x1; double x2; } leftBasePoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } rightBasePoint;

- (double)angle;
- (id)description;
- (struct CGPoint { double x1; double x2; })leftBasePoint;
- (struct CGPoint { double x1; double x2; })leftEdgePointAtDistanceFromBase:(double)arg1;
- (struct CGPoint { double x1; double x2; })rightBasePoint;
- (struct CGPoint { double x1; double x2; })rightEdgePointAtDistanceFromBase:(double)arg1;
- (void)setAngle:(double)arg1;
- (void)setLeftBasePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightBasePoint:(struct CGPoint { double x1; double x2; })arg1;

@end
