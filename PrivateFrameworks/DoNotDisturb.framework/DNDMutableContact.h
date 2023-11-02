
@interface DNDMutableContact : DNDContact

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSSet *emailAddresses;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSSet *phoneNumbers;

- (id)init;
- (void)setContactIdentifier:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;

@end
