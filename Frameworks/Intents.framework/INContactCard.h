
@interface INContactCard : NSObject <NSCopying, NSSecureCoding> {
    NSDateComponents * _birthday;
    NSString * _contactIdentifier;
    NSArray * _contactRelations;
    NSArray * _dates;
    NSString * _departmentName;
    NSArray * _emailAddresses;
    INImage * _image;
    NSArray * _instantMessageAddresses;
    bool  _isMe;
    NSString * _jobTitle;
    NSPersonNameComponents * _nameComponents;
    NSString * _organizationName;
    NSArray * _phoneNumbers;
    NSArray * _postalAddresses;
    NSArray * _urlAddresses;
}

@property (nonatomic, readonly, copy) NSDateComponents *birthday;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSArray *contactRelations;
@property (nonatomic, readonly, copy) NSArray *dates;
@property (nonatomic, readonly, copy) NSString *departmentName;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) INImage *image;
@property (nonatomic, readonly, copy) NSArray *instantMessageAddresses;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly, copy) NSString *jobTitle;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (nonatomic, readonly, copy) NSArray *postalAddresses;
@property (nonatomic, readonly, copy) NSArray *urlAddresses;

+ (id)initWithContactIdentifier:(id)arg1 nameComponents:(id)arg2 isMe:(bool)arg3 image:(id)arg4 organizationName:(id)arg5 departmentName:(id)arg6 jobTitle:(id)arg7 phoneNumbers:(id)arg8 emailAddresses:(id)arg9 postalAddresses:(id)arg10 urlAddresses:(id)arg11 contactRelations:(id)arg12 instantMessageAddresses:(id)arg13 birthday:(id)arg14 dates:(id)arg15;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)birthday;
- (id)contactIdentifier;
- (id)contactRelations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dates;
- (id)departmentName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 nameComponents:(id)arg2 isMe:(bool)arg3 image:(id)arg4 organizationName:(id)arg5 departmentName:(id)arg6 jobTitle:(id)arg7 phoneNumbers:(id)arg8 emailAddresses:(id)arg9 postalAddresses:(id)arg10 urlAddresses:(id)arg11 contactRelations:(id)arg12 instantMessageAddresses:(id)arg13 birthday:(id)arg14 dates:(id)arg15;
- (id)instantMessageAddresses;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)jobTitle;
- (id)nameComponents;
- (id)organizationName;
- (id)phoneNumbers;
- (id)postalAddresses;
- (id)urlAddresses;

@end
