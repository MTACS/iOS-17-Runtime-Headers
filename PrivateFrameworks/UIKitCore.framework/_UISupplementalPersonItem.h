
@interface _UISupplementalPersonItem : _UISupplementalItem

@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic, copy) NSString *phoneticOrganizationName;

+ (id)new;

- (unsigned long long)_identifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 icon:(id)arg2;
- (id)initWithPersonNameComponents:(id)arg1;
- (id)initWithPersonNameComponents:(id)arg1 icon:(id)arg2;
- (id)initWithTISupplementalPersonItem:(id)arg1 icon:(id)arg2;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)phoneticOrganizationName;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticOrganizationName:(id)arg1;

@end
