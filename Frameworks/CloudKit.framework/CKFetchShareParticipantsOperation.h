
@interface CKFetchShareParticipantsOperation : CKOperation <CKFetchShareParticipantsOperationCallbacks> {
    NSMutableSet * _discoveredUserIdentities;
    id /* block */  _fetchShareParticipantsCompletionBlock;
    id /* block */  _fetchShareParticipantsCompletionBlock_wrapper;
    NSMutableDictionary * _lookupErrors;
    id /* block */  _perShareParticipantCompletionBlock;
    id /* block */  _perShareParticipantCompletionBlock_wrapper;
    id /* block */  _shareParticipantFetchedBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, readonly) <CKFetchShareParticipantsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableSet *discoveredUserIdentities;
@property (nonatomic, copy) id /* block */ fetchShareParticipantsCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchShareParticipantsCompletionBlock_wrapper;
@property (nonatomic, retain) NSMutableDictionary *lookupErrors;
@property (nonatomic, readonly) CKFetchShareParticipantsOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perShareParticipantCompletionBlock;
@property (nonatomic, copy) id /* block */ perShareParticipantCompletionBlock_wrapper;
@property (nonatomic, copy) id /* block */ shareParticipantFetchedBlock;
@property (nonatomic, copy) NSArray *userIdentityLookupInfos;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)discoveredUserIdentities;
- (id /* block */)fetchShareParticipantsCompletionBlock;
- (id /* block */)fetchShareParticipantsCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleShareParticipantFetchForLookupInfo:(id)arg1 shareParticipant:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithUserIdentityLookupInfos:(id)arg1;
- (id)lookupErrors;
- (id /* block */)perShareParticipantCompletionBlock;
- (id /* block */)perShareParticipantCompletionBlock_wrapper;
- (void)setDiscoveredUserIdentities:(id)arg1;
- (void)setFetchShareParticipantsCompletionBlock:(id /* block */)arg1;
- (void)setFetchShareParticipantsCompletionBlockIVar:(id /* block */)arg1;
- (void)setFetchShareParticipantsCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setLookupErrors:(id)arg1;
- (void)setPerShareParticipantCompletionBlock:(id /* block */)arg1;
- (void)setPerShareParticipantCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setShareParticipantFetchedBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id /* block */)shareParticipantFetchedBlock;
- (id)userIdentityLookupInfos;

@end
