
@interface HMSettingConstraint : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    long long  _type;
    <NSCopying><NSSecureCoding> * _value;
}

@property (readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly, copy) <NSCopying><NSSecureCoding> *value;

+ (id)shortDescription;
+ (id)supportedValueClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;
- (long long)type;
- (id)value;

@end
