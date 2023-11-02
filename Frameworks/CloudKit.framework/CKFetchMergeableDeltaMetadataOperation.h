
@interface CKFetchMergeableDeltaMetadataOperation : CKDatabaseOperation <CKFetchMergeableDeltaMetadataOperationCallbacks> {
    id /* block */  _fetchMergeableDeltaMetadataCompletionBlock;
    NSArray * _mergeableValueIDs;
    id /* block */  _metadataFetchedBlock;
    NSMutableDictionary * _perValueErrors;
}

@property (nonatomic, readonly) <CKFetchMergeableDeltaMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchMergeableDeltaMetadataCompletionBlock;
@property (nonatomic, copy) NSArray *mergeableValueIDs;
@property (nonatomic, copy) id /* block */ metadataFetchedBlock;
@property (nonatomic, readonly) CKFetchMergeableDeltaMetadataOperationInfo *operationInfo;
@property (nonatomic, retain) NSMutableDictionary *perValueErrors;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)fetchMergeableDeltaMetadataCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleFetchForMergeableValueID:(id)arg1 metadatas:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithMergeableValueIDs:(id)arg1;
- (id)mergeableValueIDs;
- (id /* block */)metadataFetchedBlock;
- (id)perValueErrors;
- (void)setFetchMergeableDeltaMetadataCompletionBlock:(id /* block */)arg1;
- (void)setMergeableValueIDs:(id)arg1;
- (void)setMetadataFetchedBlock:(id /* block */)arg1;
- (void)setPerValueErrors:(id)arg1;

@end
