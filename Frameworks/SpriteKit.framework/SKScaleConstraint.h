
@interface SKScaleConstraint : SKConstraint {
    SKRange * _xRange;
    SKRange * _yRange;
}

@property (copy) SKRange *xRange;
@property (copy) SKRange *yRange;

+ (id)constraintWithScaleRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;
+ (id)constraintWithYRange:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;
- (bool)isEqualToScaleConstraint:(id)arg1;
- (void)setXRange:(id)arg1;
- (void)setYRange:(id)arg1;
- (id)xRange;
- (id)yRange;

@end
