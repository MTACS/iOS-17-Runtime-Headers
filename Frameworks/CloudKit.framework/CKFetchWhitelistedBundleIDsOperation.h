
@interface CKFetchWhitelistedBundleIDsOperation : CKOperation <CKFetchWhitelistedBundleIDsOperationCallbacks> {
    NSArray * _bundleIDs;
    id /* block */  _fetchWhitelistedBundleIDsCompletionBlock;
}

@property (nonatomic, copy) NSArray *bundleIDs;
@property (nonatomic, readonly) <CKFetchWhitelistedBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchWhitelistedBundleIDsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)bundleIDs;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)fetchWhitelistedBundleIDsCompletionBlock;
- (void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (void)setBundleIDs:(id)arg1;
- (void)setFetchWhitelistedBundleIDsCompletionBlock:(id /* block */)arg1;

@end
