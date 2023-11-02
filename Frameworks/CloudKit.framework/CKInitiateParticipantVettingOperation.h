
@interface CKInitiateParticipantVettingOperation : CKOperation <CKInitiateParticipantVettingOperationCallbacks> {
    NSString * _address;
    NSString * _participantID;
    id /* block */  _participantVettingInitiatedBlock;
    id /* block */  _participantVettingInitiationCompletionBlock;
    CKShareMetadata * _shareMetadata;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) <CKInitiateParticipantVettingOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKInitiateParticipantVettingOperationInfo *operationInfo;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) id /* block */ participantVettingInitiatedBlock;
@property (nonatomic, copy) id /* block */ participantVettingInitiationCompletionBlock;
@property (nonatomic, copy) CKShareMetadata *shareMetadata;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)address;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleParticipantVettingProgressWithError:(id)arg1;
- (id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3;
- (id)participantID;
- (id /* block */)participantVettingInitiatedBlock;
- (id /* block */)participantVettingInitiationCompletionBlock;
- (void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(id /* block */)arg3 participantVettingInitiationCompletionBlock:(id /* block */)arg4;
- (void)setAddress:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setParticipantVettingInitiatedBlock:(id /* block */)arg1;
- (void)setParticipantVettingInitiationCompletionBlock:(id /* block */)arg1;
- (void)setShareMetadata:(id)arg1;
- (id)shareMetadata;

@end
