
@interface CKDeclineSharesOperation : CKOperation <CKDeclineSharesOperationCallbacks> {
    id /* block */  _declineSharesCompletionBlock;
    NSMutableDictionary * _errorsByShareURL;
    id /* block */  _perShareCompletionBlock;
    NSArray * _shareMetadatas;
    NSMutableDictionary * _shareMetadatasByShareURL;
}

@property (nonatomic, readonly) <CKDeclineSharesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ declineSharesCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *errorsByShareURL;
@property (nonatomic, readonly) CKDeclineSharesOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perShareCompletionBlock;
@property (nonatomic, copy) NSArray *shareMetadatas;
@property (nonatomic, retain) NSMutableDictionary *shareMetadatasByShareURL;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)declineSharesCompletionBlock;
- (id)errorsByShareURL;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleShareDeclineForURL:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithShareMetadatas:(id)arg1;
- (id /* block */)perShareCompletionBlock;
- (void)setDeclineSharesCompletionBlock:(id /* block */)arg1;
- (void)setDeclineSharesCompletionBlockIVar:(id /* block */)arg1;
- (void)setErrorsByShareURL:(id)arg1;
- (void)setPerShareCompletionBlock:(id /* block */)arg1;
- (void)setShareMetadatas:(id)arg1;
- (void)setShareMetadatasByShareURL:(id)arg1;
- (id)shareMetadatas;
- (id)shareMetadatasByShareURL;

@end
