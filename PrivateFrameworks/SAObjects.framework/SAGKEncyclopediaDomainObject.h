
@interface SAGKEncyclopediaDomainObject : SAGKDomainObject

@property (nonatomic, copy) NSArray *linkedAnswerGroups;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *nameAnnotation;
@property (nonatomic, copy) NSArray *structuredAnswers;

+ (id)encyclopediaDomainObject;
+ (id)encyclopediaDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedAnswerGroups;
- (id)name;
- (id)nameAnnotation;
- (void)setLinkedAnswerGroups:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameAnnotation:(id)arg1;
- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;

@end
