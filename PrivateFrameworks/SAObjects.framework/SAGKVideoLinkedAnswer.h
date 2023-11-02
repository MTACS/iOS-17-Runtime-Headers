
@interface SAGKVideoLinkedAnswer : SAGKImageLinkedAnswer

@property (nonatomic, copy) NSNumber *runtimeInMilliseconds;

+ (id)videoLinkedAnswer;
+ (id)videoLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)runtimeInMilliseconds;
- (void)setRuntimeInMilliseconds:(id)arg1;

@end
