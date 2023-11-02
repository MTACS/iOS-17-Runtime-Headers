
@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks> {
    id /* block */  _fetchUserQuotaCompletionBlock;
    id /* block */  _fetchUserQuotaCompletionBlock_wrapper;
    unsigned long long  _quotaAvailable;
}

@property (nonatomic, readonly) <CKFetchUserQuotaOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchUserQuotaCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchUserQuotaCompletionBlock_wrapper;
@property (nonatomic) unsigned long long quotaAvailable;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)fetchUserQuotaCompletionBlock;
- (id /* block */)fetchUserQuotaCompletionBlock_wrapper;
- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (unsigned long long)quotaAvailable;
- (void)setFetchUserQuotaCompletionBlock:(id /* block */)arg1;
- (void)setFetchUserQuotaCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setQuotaAvailable:(unsigned long long)arg1;

@end
