
@interface Contact : INObject

@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *phoneNumber;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
