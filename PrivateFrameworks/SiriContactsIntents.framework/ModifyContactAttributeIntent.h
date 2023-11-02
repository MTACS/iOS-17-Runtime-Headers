
@interface ModifyContactAttributeIntent : INIntent

@property (nonatomic) long long contactAttributeToModify;
@property (nonatomic, copy) NSString *modifyNickName;
@property (nonatomic) long long modifyOperation;
@property (nonatomic, copy) NSString *modifyRelationship;
@property (nonatomic, retain) Contact *relatedContact;
@property (nonatomic, copy) NSArray *relatedSiriMatches;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
