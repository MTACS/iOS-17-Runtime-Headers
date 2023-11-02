
@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    id  _value;
    long long  _valueType;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *numericValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly, copy) id value;
@property (nonatomic, readonly) long long valueType;

+ (id)attributeWithName:(id)arg1;
+ (id)attributeWithName:(id)arg1 numericValue:(id)arg2;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)attributeWithName:(id)arg1 valueType:(long long)arg2;
+ (id)attributeWithName:(id)arg1 valueType:(long long)arg2 value:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttributeName:(id)arg1;
- (id)initWithAttributeName:(id)arg1 numericValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 stringValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 valueType:(long long)arg2;
- (id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isEqualToAttribute:(id)arg1;
- (id)name;
- (id)numericValue;
- (id)stringValue;
- (id)value;
- (long long)valueType;

@end
