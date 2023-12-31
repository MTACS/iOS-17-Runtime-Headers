
@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet {
    double  _equalityConstant;
    NSLayoutConstraint * _equalityConstraint;
    bool  _equalityConstraintPrefersMin;
    double  _maxConstant;
    NSLayoutConstraint * _maxConstraint;
    double  _minConstant;
    NSLayoutConstraint * _minConstraint;
}

@property (nonatomic) double equalityConstant;
@property (nonatomic) double maxConstant;
@property (nonatomic) double minConstant;

+ (id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2;
+ (id)constraintSetWithRequiredEqualityConstraint:(id)arg1;

- (void).cxx_destruct;
- (bool)_equalityConstraintIsRequired;
- (id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(bool)arg3;
- (id)_otherInequalityConstraint;
- (id)_preferredInequalityConstraint;
- (void)_updateInequalityConstants;
- (double)equalityConstant;
- (double)maxConstant;
- (double)minConstant;
- (void)setEqualityConstant:(double)arg1;
- (void)setMaxConstant:(double)arg1;
- (void)setMinConstant:(double)arg1;

@end
