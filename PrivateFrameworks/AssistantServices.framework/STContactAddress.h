
@interface STContactAddress : STSiriModelObject {
    NSURL * _contactIdentifier;
    NSString * _contactInternalGUID;
    NSString * _stringValue;
    long long  _type;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (id)contactIdentifier;
- (id)contactInternalGUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 contactIdentifier:(id)arg3 contactInternalGUID:(id)arg4;
- (id)stringValue;
- (long long)type;

@end
