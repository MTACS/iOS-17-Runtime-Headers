
@interface SAIntentGroupBatchSlotResolutionResult : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *base64EncodedIntent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *jsonEncodedIntent;
@property (nonatomic, copy) NSDictionary *slotResolutionMap;
@property (nonatomic, copy) NSArray *stepResults;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeName;

+ (id)batchSlotResolutionResult;
+ (id)batchSlotResolutionResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)base64EncodedIntent;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsonEncodedIntent;
- (void)setBase64EncodedIntent:(id)arg1;
- (void)setJsonEncodedIntent:(id)arg1;
- (void)setSlotResolutionMap:(id)arg1;
- (void)setStepResults:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)slotResolutionMap;
- (id)stepResults;
- (id)typeName;

@end
