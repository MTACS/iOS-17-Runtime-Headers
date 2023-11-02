
@interface SKSizeConstraint : SKConstraint {
    SKRange * _heightRange;
    SKRange * _widthRange;
}

@property (copy) SKRange *heightRange;
@property (copy) SKRange *widthRange;

+ (id)constraintWithHeightRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)heightRange;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;
- (bool)isEqualToSizeConstraint:(id)arg1;
- (void)setHeightRange:(id)arg1;
- (void)setWidthRange:(id)arg1;
- (id)widthRange;

@end
