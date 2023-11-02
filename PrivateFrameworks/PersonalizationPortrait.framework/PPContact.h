
@interface PPContact : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _birthday;
    NSArray * _emailAddresses;
    NSString * _familyName;
    NSString * _givenName;
    NSString * _identifier;
    NSString * _jobTitle;
    NSString * _localizedFullName;
    NSString * _middleName;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSDateComponents * _nonGregorianBirthday;
    NSString * _organizationName;
    NSArray * _phoneNumbers;
    NSArray * _postalAddresses;
    NSArray * _socialProfiles;
    unsigned char  _source;
}

@property (nonatomic, readonly) NSDateComponents *birthday;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *jobTitle;
@property (nonatomic, readonly) NSString *localizedFullName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *namePrefix;
@property (nonatomic, readonly) NSString *nameSuffix;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSDateComponents *nonGregorianBirthday;
@property (nonatomic, readonly) NSString *organizationName;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *postalAddresses;
@property (nonatomic, readonly) NSArray *socialProfiles;
@property (nonatomic, readonly) unsigned char source;

+ (id)contactWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17;
+ (id)contactsContactIdentifierWithIdentifier:(id)arg1 error:(id*)arg2;
+ (long long)foundInAppsRecordIdentifierNumberWithIdentifier:(id)arg1 error:(id*)arg2;
+ (bool)identifier:(id)arg1 startsWithPrefix:(id)arg2;
+ (unsigned char)sourceFromSourceIdentifier:(id)arg1;
+ (id)sourceIdentifierWithSource:(unsigned char)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_generateLocalizedFullName;
- (id)birthday;
- (id)contactsContactIdentifierWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (long long)foundInAppsRecordIdentifierNumberWithError:(id*)arg1;
- (id)givenName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactsContact:(id)arg1;
- (id)initWithFoundInAppsContact:(id)arg1;
- (id)initWithIdentifier:(id)arg1 source:(unsigned char)arg2 namePrefix:(id)arg3 givenName:(id)arg4 middleName:(id)arg5 familyName:(id)arg6 nameSuffix:(id)arg7 nickname:(id)arg8 localizedFullName:(id)arg9 organizationName:(id)arg10 jobTitle:(id)arg11 birthday:(id)arg12 nonGregorianBirthday:(id)arg13 phoneNumbers:(id)arg14 emailAddresses:(id)arg15 socialProfiles:(id)arg16 postalAddresses:(id)arg17;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContact:(id)arg1;
- (id)jobTitle;
- (id)localizedFullName;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)organizationName;
- (id)phoneNumbers;
- (id)postalAddresses;
- (void)setEmailAddressForTesting:(id)arg1;
- (void)setIdentifierForTesting:(id)arg1;
- (id)socialProfiles;
- (unsigned char)source;

@end
