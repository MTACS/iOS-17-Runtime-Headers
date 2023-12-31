
@interface SFContactInfo : NSObject <NSSecureCoding> {
    NSString * _contactIdentifier;
    NSString * _emailAddress;
    NSString * _phoneNumber;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)phoneNumber;
- (void)setContactIdentifier:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
