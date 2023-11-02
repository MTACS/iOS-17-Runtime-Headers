
@interface CKFetchNotificationChangesOperation : CKOperation <CKFetchNotificationChangesOperationCallbacks> {
    id /* block */  _fetchNotificationChangesCompletionBlock;
    bool  _moreComing;
    id /* block */  _notificationChangedBlock;
    CKServerChangeToken * _previousServerChangeToken;
    CKServerChangeToken * _resultServerChangeToken;
    unsigned long long  _resultsLimit;
}

@property (nonatomic, readonly) <CKFetchNotificationChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchNotificationChangesCompletionBlock;
@property (nonatomic) bool moreComing;
@property (nonatomic, copy) id /* block */ notificationChangedBlock;
@property (nonatomic, readonly) CKFetchNotificationChangesOperationInfo *operationInfo;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)fetchNotificationChangesCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleChangedNotification:(id)arg1;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 moreComing:(bool)arg2 metrics:(id)arg3 error:(id)arg4;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (bool)moreComing;
- (id /* block */)notificationChangedBlock;
- (id)previousServerChangeToken;
- (id)resultServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setFetchNotificationChangesCompletionBlock:(id /* block */)arg1;
- (void)setMoreComing:(bool)arg1;
- (void)setNotificationChangedBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
