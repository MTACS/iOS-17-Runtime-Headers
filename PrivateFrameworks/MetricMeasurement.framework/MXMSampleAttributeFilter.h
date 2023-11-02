
@interface MXMSampleAttributeFilter : MXMSampleAttribute <NSCopying, NSSecureCoding> {
    NSArray * _matchingNumericAttributeValues;
    NSArray * _matchingStringAttributeValues;
}

@property (nonatomic, readonly) bool finite;
@property (getter=finite, nonatomic, readonly) bool isFinite;
@property (nonatomic, readonly, copy) NSNumber *numericValue;
@property (nonatomic, readonly, copy) NSSet *numericValues;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly, copy) NSSet *stringValues;
@property (nonatomic, readonly, copy) id value;
@property (nonatomic, readonly, copy) NSSet *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_matchesSampleAttributeNameWithName:(id)arg1;
- (bool)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)arg1;
- (bool)_matchesSampleAttributeValueWithValue:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)finite;
- (id)initWithAttribute:(id)arg1;
- (id)initWithAttributeName:(id)arg1 numericValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 numericValues:(id)arg2;
- (id)initWithAttributeName:(id)arg1 stringValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 stringValues:(id)arg2;
- (id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)matchesSampleWithAttribute:(id)arg1;
- (id)numericValue;
- (id)numericValues;
- (id)stringValue;
- (id)stringValues;
- (id)value;
- (id)values;

@end
