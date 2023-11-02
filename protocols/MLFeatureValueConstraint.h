
@protocol MLFeatureValueConstraint <NSSecureCoding>

@required

- (bool)isAllowedValue:(MLFeatureValue *)arg1 error:(id*)arg2;

@end
