
@interface AXPIFingerEventTouchInfo : NSObject {
    double  _force;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedLocation;
}

@property (nonatomic) double force;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedLocation;

- (double)force;
- (struct CGPoint { double x1; double x2; })normalizedLocation;
- (void)setForce:(double)arg1;
- (void)setNormalizedLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
