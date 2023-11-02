
@interface CKDFetchMergeableDeltasOperation : CKDDatabaseOperation {
    id /* block */  _deltasFetchedBlock;
    NSArray * _mergeableValueIDs;
}

@property (nonatomic, retain) <CKFetchMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ deltasFetchedBlock;
@property (nonatomic, retain) NSArray *mergeableValueIDs;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)activityCreate;
- (id /* block */)deltasFetchedBlock;
- (void)fetchMergeableDeltas;
- (void)fetchMergeableDeltasRecursivelyForValueIDs:(id)arg1 continuationTokens:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleMergeableDeltasFetchedForValueID:(id)arg1 fetchedDeltas:(id)arg2 result:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)mergeableValueIDs;
- (int)operationType;
- (void)setDeltasFetchedBlock:(id /* block */)arg1;
- (void)setMergeableValueIDs:(id)arg1;

@end
