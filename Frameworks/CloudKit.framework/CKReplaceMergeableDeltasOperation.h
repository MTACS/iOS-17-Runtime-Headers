
@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation <CKReplaceMergeableDeltasOperationCallbacks> {
    id /* block */  _perReplacementBlock;
    NSMutableDictionary * _perValueErrors;
    NSArray * _replaceDeltasRequests;
    id /* block */  _replaceMergeableDeltasCompletionBlock;
}

@property (nonatomic, readonly) <CKReplaceMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKReplaceMergeableDeltasOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perReplacementBlock;
@property (nonatomic, retain) NSMutableDictionary *perValueErrors;
@property (nonatomic, copy) NSArray *replaceDeltasRequests;
@property (nonatomic, copy) id /* block */ replaceMergeableDeltasCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleCompletedReplaceDeltasRequest:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithReplaceDeltasRequests:(id)arg1;
- (id /* block */)perReplacementBlock;
- (id)perValueErrors;
- (id)replaceDeltasRequests;
- (id /* block */)replaceMergeableDeltasCompletionBlock;
- (void)setPerReplacementBlock:(id /* block */)arg1;
- (void)setPerValueErrors:(id)arg1;
- (void)setReplaceDeltasRequests:(id)arg1;
- (void)setReplaceMergeableDeltasCompletionBlock:(id /* block */)arg1;

@end
