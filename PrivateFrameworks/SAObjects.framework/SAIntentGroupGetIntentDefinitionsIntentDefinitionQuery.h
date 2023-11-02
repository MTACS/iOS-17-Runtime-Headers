
@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *entity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *verb;

+ (id)getIntentDefinitionsIntentDefinitionQuery;
+ (id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entity;
- (id)groupIdentifier;
- (void)setEntity:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
