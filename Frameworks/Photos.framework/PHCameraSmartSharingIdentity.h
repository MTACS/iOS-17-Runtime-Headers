
@interface PHCameraSmartSharingIdentity : NSObject <NSSecureCoding> {
    NSArray * _contactIdentifiers;
    NSString * _emailAddress;
    NSString * _phoneNumber;
}

@property (readonly) NSArray *contactIdentifiers;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 contactIdentifiers:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;

@end
