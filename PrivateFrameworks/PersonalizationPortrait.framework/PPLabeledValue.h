
@interface PPLabeledValue : NSObject <NSCopying, NSSecureCoding> {
    NSString * _label;
    NSObject<NSCopying><NSSecureCoding> * _value;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<NSCopying><NSSecureCoding> *value;

+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledValue:(id)arg1;
- (id)label;
- (id)value;

@end
