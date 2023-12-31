
@interface SOSContact : NSObject {
    NSString * _name;
    NSString * _nameContactIdentifier;
    NSString * _phoneNumber;
    NSString * _phoneNumberContactIdentifier;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nameContactIdentifier;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneNumberContactIdentifier;

- (void).cxx_destruct;
- (id)name;
- (id)nameContactIdentifier;
- (id)phoneNumber;
- (id)phoneNumberContactIdentifier;
- (void)setName:(id)arg1;
- (void)setNameContactIdentifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumberContactIdentifier:(id)arg1;

@end
