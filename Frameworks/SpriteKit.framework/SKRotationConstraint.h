
@interface SKRotationConstraint : SKConstraint {
    SKRange * _zRotationRange;
}

@property (copy) SKRange *zRotationRange;

+ (id)constraintWithZRotationRange:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZRotationRange:(id)arg1;
- (bool)isEqualToRotationConstraint:(id)arg1;
- (void)setZRotationRange:(id)arg1;
- (id)zRotationRange;

@end
