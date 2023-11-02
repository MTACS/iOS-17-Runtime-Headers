
@interface SAGKOpenEndedDomainObject : SAGKDomainObject

@property (nonatomic, retain) SAGKDirectAnswer *directAnswer;
@property (nonatomic, copy) NSArray *image;
@property (nonatomic, copy) NSArray *linkedAnswerGroups;
@property (nonatomic, copy) NSArray *structuredAnswers;

+ (id)openEndedDomainObject;
+ (id)openEndedDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)directAnswer;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)linkedAnswerGroups;
- (void)setDirectAnswer:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLinkedAnswerGroups:(id)arg1;
- (void)setStructuredAnswers:(id)arg1;
- (id)structuredAnswers;

@end
