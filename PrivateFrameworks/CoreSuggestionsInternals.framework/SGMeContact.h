
@interface SGMeContact : NSObject {
    NSSet * _emailAddresses;
    NSString * _familyName;
    NSString * _formattedName;
    NSString * _givenName;
    CNContact * _meContact;
    NSSet * _phoneNumbers;
    NSSet * _postalAddresses;
    NSSet * _socialProfileIdentifiers;
}

@property (nonatomic, readonly) NSSet *emailAddresses;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *formattedName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSSet *phoneNumbers;
@property (nonatomic, readonly) NSSet *postalAddresses;
@property (nonatomic, readonly) NSSet *socialProfileIdentifiers;

+ (id)keysToFetch;

- (void).cxx_destruct;
- (id)emailAddresses;
- (id)familyName;
- (id)formattedName;
- (id)givenName;
- (id)initWithContact:(id)arg1;
- (bool)isSameAsOrUnifiedWithContact:(id)arg1;
- (id)phoneNumbers;
- (id)postalAddresses;
- (id)socialProfileIdentifiers;

@end
