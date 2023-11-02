
@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *base64EncodedProtobufMessage;
@property (nonatomic, retain) SACommandFailed *commandFailed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonEncodedSlotResolutionResult;
@property (nonatomic, copy) NSString *keyPath;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeName;

+ (id)batchSlotResolutionResultStepResult;
+ (id)batchSlotResolutionResultStepResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)base64EncodedProtobufMessage;
- (id)commandFailed;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonEncodedSlotResolutionResult;
- (id)keyPath;
- (void)setBase64EncodedProtobufMessage:(id)arg1;
- (void)setCommandFailed:(id)arg1;
- (void)setJsonEncodedSlotResolutionResult:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;

@end
