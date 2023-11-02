
@interface GetContactIntent : INIntent

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *contactRelation;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, retain) NSNumber *isMe;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSArray *siriMatches;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
