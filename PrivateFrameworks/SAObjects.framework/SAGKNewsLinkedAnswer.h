
@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic, copy) NSDate *publicationDate;
@property (nonatomic, copy) NSString *source;

+ (id)newsLinkedAnswer;
+ (id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)publicationDate;
- (void)setPublicationDate:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
