
@interface SAKnowledgeSetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)setValuesForKeys;
+ (id)setValuesForKeysWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entries;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEntries:(id)arg1;

@end
