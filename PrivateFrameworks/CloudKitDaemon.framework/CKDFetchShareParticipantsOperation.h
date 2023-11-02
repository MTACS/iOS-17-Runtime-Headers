
@interface CKDFetchShareParticipantsOperation : CKDOperation {
    CKDPublicIdentityLookupRequest * _pendingRequest;
    id /* block */  _shareParticipantFetchedBlock;
    NSArray * _userIdentityLookupInfos;
}

@property (nonatomic, retain) <CKFetchShareParticipantsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) CKDPublicIdentityLookupRequest *pendingRequest;
@property (nonatomic, copy) id /* block */ shareParticipantFetchedBlock;
@property (nonatomic, retain) NSArray *userIdentityLookupInfos;

- (void).cxx_destruct;
- (void)_fetchIdentities;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (id)activityCreate;
- (void)finishWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (id)pendingRequest;
- (void)setPendingRequest:(id)arg1;
- (void)setShareParticipantFetchedBlock:(id /* block */)arg1;
- (void)setUserIdentityLookupInfos:(id)arg1;
- (id /* block */)shareParticipantFetchedBlock;
- (id)userIdentityLookupInfos;

@end
