
@interface SKPhysicsJointSpring : SKPhysicsJoint {
    double  _damping;
    double  _frequency;
}

@property (nonatomic) double damping;
@property (nonatomic) double frequency;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint { double x1; double x2; })arg3 anchorB:(struct CGPoint { double x1; double x2; })arg4;
+ (bool)supportsSecureCoding;

- (double)damping;
- (double)frequency;
- (void)setDamping:(double)arg1;
- (void)setFrequency:(double)arg1;

@end
