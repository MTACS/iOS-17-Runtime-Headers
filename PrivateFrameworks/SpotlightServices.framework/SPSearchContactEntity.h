
@interface SPSearchContactEntity : SPSearchEntity {
    NSArray * _addresses;
    NSMutableArray * _allEmailAddresses;
    NSMutableArray * _allNames;
    NSMutableArray * _allPhoneNumbers;
    NSDateComponents * _birthdayComponents;
    NSString * _contactIdentifier;
    NSArray * _emailAddresses;
    NSString * _name;
    NSString * _personIdentifier;
    NSString * _personQueryIdentifier;
    NSArray * _phoneNumbers;
    NSDictionary * _rankTerms;
    NSArray * _rawPhoneNumbers;
}

@property (nonatomic, readonly) NSArray *addresses;
@property (nonatomic, readonly) NSDateComponents *birthdayComponents;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *personIdentifier;
@property (nonatomic, readonly) NSString *personQueryIdentifier;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *rawPhoneNumbers;

+ (bool)stringA:(id)arg1 isSameToStringB:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)updatePersonQueryIdentifier:(id)arg1 withContactIdentifier:(id)arg2;
+ (id)updatePersonQueryIdentifier:(id)arg1 withPersonIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)addresses;
- (id)birthdayComponents;
- (void)commonInit;
- (id)contact;
- (id)contactIdentifier;
- (id)currentSearchString;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (void)getVariantsForPhoneNumber:(id)arg1 searchNumbers:(id)arg2 displayNumbers:(id)arg3 fallbackDisplayNumbers:(id)arg4;
- (bool)hasSameContactAsContactEntity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 fromSuggestion:(bool)arg2;
- (id)initWithPersonQueryIdentifier:(id)arg1 personName:(id)arg2 fromSuggestion:(bool)arg3;
- (bool)isContactEntitySearch;
- (bool)isScopedSearch;
- (id)name;
- (id)personIdentifier;
- (id)personQueryIdentifier;
- (id)phoneNumbers;
- (id)rawPhoneNumbers;
- (id)spotlightFilterQueries;
- (id)spotlightQueryString;
- (id)spotlightRankTerms;
- (id)symbolName;
- (void)updateSearchString:(id)arg1;

@end
