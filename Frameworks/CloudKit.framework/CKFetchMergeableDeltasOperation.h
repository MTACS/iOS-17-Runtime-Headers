
@interface CKFetchMergeableDeltasOperation : CKDatabaseOperation <CKFetchMergeableDeltasOperationCallbacks> {
    id /* block */  _deltasFetchedBlock;
    id /* block */  _fetchMergeableDeltasCompletionBlock;
    NSArray * _mergeableValueIDs;
}

@property (nonatomic, readonly) <CKFetchMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ deltasFetchedBlock;
@property (nonatomic, copy) id /* block */ fetchMergeableDeltasCompletionBlock;
@property (nonatomic, copy) NSArray *mergeableValueIDs;
@property (nonatomic, readonly) CKFetchMergeableDeltasOperationInfo *operationInfo;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)deltasFetchedBlock;
- (id /* block */)fetchMergeableDeltasCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleFetchForMergeableValueID:(id)arg1 fetchedDeltas:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithMergeableValueIDs:(id)arg1;
- (id)mergeableValueIDs;
- (void)setDeltasFetchedBlock:(id /* block */)arg1;
- (void)setFetchMergeableDeltasCompletionBlock:(id /* block */)arg1;
- (void)setMergeableValueIDs:(id)arg1;

@end
