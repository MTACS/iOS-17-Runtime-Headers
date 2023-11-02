
@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation <CKFetchShareParticipantKeyOperationCallbacks> {
    NSDictionary * _baseTokensByShareID;
    NSDictionary * _childRecordIDsByShareID;
    NSMutableDictionary * _errorsByShareID;
    NSArray * _shareIDs;
    id /* block */  _shareParticipantKeyCompletionBlock;
    id /* block */  _shareParticipantKeyFetchedBlock;
}

@property (nonatomic, copy) NSDictionary *baseTokensByShareID;
@property (nonatomic, copy) NSDictionary *childRecordIDsByShareID;
@property (nonatomic, readonly) <CKFetchShareParticipantKeyOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *errorsByShareID;
@property (nonatomic, readonly) CKFetchShareParticipantKeyOperationInfo *operationInfo;
@property (nonatomic, copy) NSArray *shareIDs;
@property (nonatomic, copy) id /* block */ shareParticipantKeyCompletionBlock;
@property (nonatomic, copy) id /* block */ shareParticipantKeyFetchedBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)baseTokensByShareID;
- (id)childRecordIDsByShareID;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)errorsByShareID;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleParticipantKeyFetchForRecordID:(id)arg1 participantKey:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithShareIDs:(id)arg1;
- (void)setBaseTokensByShareID:(id)arg1;
- (void)setChildRecordIDsByShareID:(id)arg1;
- (void)setErrorsByShareID:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setShareParticipantKeyCompletionBlock:(id /* block */)arg1;
- (void)setShareParticipantKeyFetchedBlock:(id /* block */)arg1;
- (id)shareIDs;
- (id /* block */)shareParticipantKeyCompletionBlock;
- (id /* block */)shareParticipantKeyFetchedBlock;

@end
