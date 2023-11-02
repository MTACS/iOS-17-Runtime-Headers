
@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks> {
    id /* block */  _acceptSharesCompletionBlock;
    id /* block */  _acceptSharesCompletionBlock_wrapper;
    NSMutableDictionary * _errorsByShareURL;
    id /* block */  _perShareCompletionBlock;
    id /* block */  _perShareCompletionBlock_wrapper;
    NSArray * _shareMetadatas;
    NSMutableDictionary * _shareMetadatasByShareURL;
}

@property (nonatomic, copy) id /* block */ acceptSharesCompletionBlock;
@property (nonatomic, copy) id /* block */ acceptSharesCompletionBlock_wrapper;
@property (nonatomic, readonly) <CKAcceptSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *errorsByShareURL;
@property (nonatomic, readonly) CKAcceptSharesOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perShareCompletionBlock;
@property (nonatomic, copy) id /* block */ perShareCompletionBlock_wrapper;
@property (nonatomic, copy) NSArray *shareMetadatas;
@property (nonatomic, retain) NSMutableDictionary *shareMetadatasByShareURL;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id /* block */)acceptSharesCompletionBlock;
- (id /* block */)acceptSharesCompletionBlock_wrapper;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)errorsByShareURL;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleShareAcceptanceForURL:(id)arg1 share:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithShareMetadatas:(id)arg1;
- (id /* block */)perShareCompletionBlock;
- (id /* block */)perShareCompletionBlock_wrapper;
- (void)setAcceptSharesCompletionBlock:(id /* block */)arg1;
- (void)setAcceptSharesCompletionBlockIVar:(id /* block */)arg1;
- (void)setAcceptSharesCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setErrorsByShareURL:(id)arg1;
- (void)setPerShareCompletionBlock:(id /* block */)arg1;
- (void)setPerShareCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setShareMetadatas:(id)arg1;
- (void)setShareMetadatasByShareURL:(id)arg1;
- (id)shareMetadatas;
- (id)shareMetadatasByShareURL;

@end
