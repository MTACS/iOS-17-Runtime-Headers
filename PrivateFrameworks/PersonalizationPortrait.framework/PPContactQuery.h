
@interface PPContactQuery : NSObject <NSCopying, NSSecureCoding> {
    NSString * _context;
    unsigned char  _domain;
    NSString * _matchingEmail;
    NSArray * _matchingIdentifiers;
    NSString * _matchingName;
    NSString * _matchingPhone;
    NSString * _matchingPostalAddress;
    bool  _onlyQueryMostRelevantContacts;
    NSString * _targetBundleIdentifier;
}

@property (nonatomic, retain) NSString *context;
@property (nonatomic) unsigned char domain;
@property (nonatomic, retain) NSString *matchingEmail;
@property (nonatomic, retain) NSArray *matchingIdentifiers;
@property (nonatomic, retain) NSString *matchingName;
@property (nonatomic, retain) NSString *matchingPhone;
@property (nonatomic, retain) NSString *matchingPostalAddress;
@property (nonatomic) bool onlyQueryMostRelevantContacts;
@property (nonatomic, retain) NSString *targetBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned char)domain;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNoConstraints;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactQuery:(id)arg1;
- (id)matchingEmail;
- (id)matchingIdentifiers;
- (id)matchingName;
- (id)matchingPhone;
- (id)matchingPostalAddress;
- (bool)onlyQueryMostRelevantContacts;
- (void)setContext:(id)arg1;
- (void)setDomain:(unsigned char)arg1;
- (void)setMatchingEmail:(id)arg1;
- (void)setMatchingIdentifiers:(id)arg1;
- (void)setMatchingName:(id)arg1;
- (void)setMatchingPhone:(id)arg1;
- (void)setMatchingPostalAddress:(id)arg1;
- (void)setOnlyQueryMostRelevantContacts:(bool)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (id)targetBundleIdentifier;

@end
