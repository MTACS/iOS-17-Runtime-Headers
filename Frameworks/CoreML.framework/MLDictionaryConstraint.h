
@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {
    long long  _keyType;
}

@property (nonatomic, readonly) long long keyType;

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyType:(long long)arg1;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (long long)keyType;

@end
