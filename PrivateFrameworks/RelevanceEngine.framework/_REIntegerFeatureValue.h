
@interface _REIntegerFeatureValue : REFeatureValue {
    unsigned long long  _value;
}

+ (id)featureValueWithInt64:(long long)arg1;

- (unsigned long long)_integralFeatureValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(long long)arg1;
- (unsigned long long)int64Value;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
