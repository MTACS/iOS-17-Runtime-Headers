
@interface SAIntentGroupIntentDefinitionInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentDefinition;
@property (readonly) Class superclass;

+ (id)intentDefinitionInfo;
+ (id)intentDefinitionInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentDefinition;
- (void)setIntentDefinition:(id)arg1;

@end
