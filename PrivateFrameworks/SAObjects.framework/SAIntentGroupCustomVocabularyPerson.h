
@interface SAIntentGroupCustomVocabularyPerson : AceObject <SAIntentGroupCustomVocabularyEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *relationship;
@property (readonly) Class superclass;

+ (id)customVocabularyPerson;
+ (id)customVocabularyPersonWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)firstName;
- (id)groupIdentifier;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)relationship;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setRelationship:(id)arg1;

@end
