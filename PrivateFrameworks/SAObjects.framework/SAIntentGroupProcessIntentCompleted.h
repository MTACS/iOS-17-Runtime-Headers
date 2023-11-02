
@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, retain) SAIntentGroupBatchSlotResolutionResult *batchSlotResolutionResult;
@property (nonatomic, retain) SAIntentGroupConfirmIntentCompleted *confirmIntentCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAIntentGroupHandleIntentCompleted *handleIntentCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastAttemptedStep;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)processIntentCompleted;
+ (id)processIntentCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)batchSlotResolutionResult;
- (id)confirmIntentCompleted;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handleIntentCompleted;
- (id)lastAttemptedStep;
- (bool)requiresResponse;
- (void)setBatchSlotResolutionResult:(id)arg1;
- (void)setConfirmIntentCompleted:(id)arg1;
- (void)setHandleIntentCompleted:(id)arg1;
- (void)setLastAttemptedStep:(id)arg1;

@end
