
@interface SCNPhysicsNoiseField : SCNPhysicsField {
    double  _animationSpeed;
    double  _smoothness;
}

@property (nonatomic) double animationSpeed;
@property (nonatomic) double smoothness;

+ (bool)supportsSecureCoding;

- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_createField;
- (double)animationSpeed;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAnimationSpeed:(double)arg1;
- (void)setSmoothness:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (double)smoothness;
- (bool)supportsDirection;
- (bool)supportsOffset;
- (id)valueForUndefinedKey:(id)arg1;

@end