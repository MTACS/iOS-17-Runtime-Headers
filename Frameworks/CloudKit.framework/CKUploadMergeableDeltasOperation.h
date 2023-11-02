
@interface CKUploadMergeableDeltasOperation : CKDatabaseOperation <CKUploadMergeableDeltasOperationCallbacks> {
    NSArray * _deltas;
    id /* block */  _perDeltaCompletionBlock;
    NSMutableDictionary * _perItemErrors;
    id /* block */  _perReplacementCompletionBlock;
    NSArray * _replacementRequests;
    id /* block */  _uploadDeltasCompletionBlock;
}

@property (nonatomic, readonly) <CKUploadMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKUploadMergeableDeltasOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perDeltaCompletionBlock;
@property (nonatomic, copy) id /* block */ perReplacementCompletionBlock;
@property (nonatomic, copy) id /* block */ uploadDeltasCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleReplacementRequest:(id)arg1 error:(id)arg2;
- (void)handleUploadForDeltaIdentifier:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithDeltas:(id)arg1 replacementRequests:(id)arg2;
- (id /* block */)perDeltaCompletionBlock;
- (id /* block */)perReplacementCompletionBlock;
- (void)setPerDeltaCompletionBlock:(id /* block */)arg1;
- (void)setPerReplacementCompletionBlock:(id /* block */)arg1;
- (void)setUploadDeltasCompletionBlock:(id /* block */)arg1;
- (id /* block */)uploadDeltasCompletionBlock;

@end
