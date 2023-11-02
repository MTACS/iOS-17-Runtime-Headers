
@interface EMVIP : NSObject <NSSecureCoding> {
    NSString * _displayName;
    EAEmailAddressSet * _emailAddresses;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) EAEmailAddressSet *emailAddresses;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 displayName:(id)arg4;
- (bool)_isEqualToVIP:(id)arg1;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
