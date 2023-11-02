
@interface SAAnswerDomainObject : SADomainObject

@property (nonatomic, retain) SAUIAppPunchOut *appPunchOut;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) SAAnswerDirectAnswer *directAnswer;
@property (nonatomic, copy) NSArray *linkedAnswerGroups;
@property (nonatomic, copy) NSArray *structuredAnswers;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)appPunchOut;
- (id)category;
- (id)directAnswer;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedAnswerGroups;
- (void)setAppPunchOut:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDirectAnswer:(id)arg1;
- (void)setLinkedAnswerGroups:(id)arg1;
- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;

@end
