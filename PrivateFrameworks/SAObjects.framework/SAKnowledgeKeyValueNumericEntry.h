
@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry

@property (nonatomic, copy) NSNumber *value;

+ (id)keyValueNumericEntry;
+ (id)keyValueNumericEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setValue:(id)arg1;
- (id)value;

@end
