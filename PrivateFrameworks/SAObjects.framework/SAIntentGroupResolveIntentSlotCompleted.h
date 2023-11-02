
@interface SAIntentGroupResolveIntentSlotCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (nonatomic, copy) NSString *jsonEncodedIntentSlotResolutionResult;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)resolveIntentSlotCompleted;
+ (id)resolveIntentSlotCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentSlotResolutionResult;
- (id)jsonEncodedIntentSlotResolutionResult;
- (bool)requiresResponse;
- (void)setIntentSlotResolutionResult:(id)arg1;
- (void)setJsonEncodedIntentSlotResolutionResult:(id)arg1;

@end
