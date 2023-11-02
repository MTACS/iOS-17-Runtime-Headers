
@interface SKPhysicsJointSliding : SKPhysicsJoint {
    double  _lowerDistanceLimit;
    bool  _shouldEnableLimits;
    double  _upperDistanceLimit;
}

@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) bool shouldEnableLimits;
@property (nonatomic) double upperDistanceLimit;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3 axis:(struct CGVector { double x1; double x2; })arg4;
+ (bool)supportsSecureCoding;

- (double)lowerDistanceLimit;
- (void)setLowerDistanceLimit:(double)arg1;
- (void)setShouldEnableLimits:(bool)arg1;
- (void)setUpperDistanceLimit:(double)arg1;
- (bool)shouldEnableLimits;
- (double)upperDistanceLimit;

@end
