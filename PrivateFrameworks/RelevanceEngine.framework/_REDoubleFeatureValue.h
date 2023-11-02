
@interface _REDoubleFeatureValue : REFeatureValue {
    double  _value;
}

+ (id)featureValueWithDouble:(double)arg1;

- (unsigned long long)_integralFeatureValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (unsigned long long)hash;
- (id)initWithValue:(double)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
