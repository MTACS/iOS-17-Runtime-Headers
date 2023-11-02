
@interface AKCurvePoint : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftTangentPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightTangentPoint;
    double  _roundness;
    double  _smoothness;
    double  _x;
    double  _y;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } CGPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } leftTangentPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } rightTangentPoint;
@property (nonatomic) double roundness;
@property (nonatomic) double smoothness;
@property (nonatomic) double x;
@property (nonatomic) double y;

+ (id)pointWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)pointWithX:(double)arg1 y:(double)arg2;

- (struct CGPoint { double x1; double x2; })CGPoint;
- (id)initWithX:(double)arg1 y:(double)arg2;
- (struct CGPoint { double x1; double x2; })leftTangentPoint;
- (struct CGPoint { double x1; double x2; })rightTangentPoint;
- (double)roundness;
- (void)setCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLeftTangentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightTangentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRoundness:(double)arg1;
- (void)setSmoothness:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (double)smoothness;
- (double)x;
- (double)y;

@end
