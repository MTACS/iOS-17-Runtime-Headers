
@interface SKPhysicsJointLimit : SKPhysicsJoint {
    double  _maxLength;
}

@property (nonatomic) double maxLength;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint { double x1; double x2; })arg3 anchorB:(struct CGPoint { double x1; double x2; })arg4;
+ (bool)supportsSecureCoding;

- (double)maxLength;
- (void)setMaxLength:(double)arg1;

@end
