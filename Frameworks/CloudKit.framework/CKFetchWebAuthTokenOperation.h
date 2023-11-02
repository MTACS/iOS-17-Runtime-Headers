
@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation <CKFetchWebAuthTokenOperationCallbacks> {
    NSString * _APIToken;
    id /* block */  _fetchWebAuthTokenCompletionBlock;
    id /* block */  _fetchWebAuthTokenCompletionBlock_wrapper;
    NSString * _webAuthToken;
}

@property (nonatomic, copy) NSString *APIToken;
@property (nonatomic, readonly) <CKFetchWebAuthTokenOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchWebAuthTokenCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchWebAuthTokenCompletionBlock_wrapper;
@property (nonatomic, readonly) CKFetchWebAuthTokenOperationInfo *operationInfo;
@property (nonatomic, copy) NSString *webAuthToken;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (id)APIToken;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)fetchWebAuthTokenCompletionBlock;
- (id /* block */)fetchWebAuthTokenCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleOperationDidCompleteWithWebAuthToken:(id)arg1 metrics:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithAPIToken:(id)arg1;
- (void)setAPIToken:(id)arg1;
- (void)setFetchWebAuthTokenCompletionBlock:(id /* block */)arg1;
- (void)setFetchWebAuthTokenCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end
