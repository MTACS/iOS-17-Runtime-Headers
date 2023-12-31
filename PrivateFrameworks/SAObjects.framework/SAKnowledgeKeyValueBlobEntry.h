
@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry

@property (nonatomic, copy) NSData *value;

+ (id)keyValueBlobEntry;
+ (id)keyValueBlobEntryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setValue:(id)arg1;
- (id)value;

@end
