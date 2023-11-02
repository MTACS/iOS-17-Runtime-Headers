
@interface CHHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _normalizedValue;
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *normalizedValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

+ (long long)handleTypeForValue:(id)arg1;
+ (id)normalizedEmailAddressHandleForValue:(id)arg1;
+ (id)normalizedGenericHandleForValue:(id)arg1;
+ (id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandle:(id)arg1;
- (bool)isPseudonym;
- (bool)isTemporary;
- (id)normalizedValue;
- (long long)type;
- (id)value;

@end
