
@interface _CACGesturePathPoint : NSObject {
    double  _absoluteTime;
    double  _decay;
    double  _force;
    double  _length;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    double  _relativeTime;
    bool  _sentinelPoint;
}

@property (nonatomic) double absoluteTime;
@property (nonatomic) double decay;
@property (nonatomic) double force;
@property (nonatomic) double length;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) double relativeTime;
@property (getter=isSentinelPoint, nonatomic) bool sentinelPoint;

- (double)absoluteTime;
- (double)decay;
- (id)description;
- (double)force;
- (bool)isSentinelPoint;
- (double)length;
- (struct CGPoint { double x1; double x2; })point;
- (double)relativeTime;
- (void)setAbsoluteTime:(double)arg1;
- (void)setDecay:(double)arg1;
- (void)setForce:(double)arg1;
- (void)setLength:(double)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRelativeTime:(double)arg1;
- (void)setSentinelPoint:(bool)arg1;

@end
