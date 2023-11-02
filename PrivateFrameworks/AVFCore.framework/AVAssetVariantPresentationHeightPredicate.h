
@interface AVAssetVariantPresentationHeightPredicate : NSPredicate {
    double  _height;
    NSPredicateOperator * _operator;
}

+ (bool)supportsSecureCoding;

- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresentationHeight:(double)arg1 operatorType:(unsigned long long)arg2;
- (id)predicateFormat;

@end
