
@interface CKDFetchMergeableDeltaMetadataOperation : CKDDatabaseOperation {
    NSArray * _mergeableValueIDs;
    id /* block */  _metadataFetchedBlock;
}

@property (nonatomic, retain) <CKFetchMergeableDeltaMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSArray *mergeableValueIDs;
@property (nonatomic, copy) id /* block */ metadataFetchedBlock;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)activityCreate;
- (void)fetchMetadata;
- (void)fetchMetadataRecursivelyForMergeableValueIDs:(id)arg1 continuationTokens:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleFetchedMetadatasForMergeableValueID:(id)arg1 metadatas:(id)arg2 result:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)mergeableValueIDs;
- (id /* block */)metadataFetchedBlock;
- (int)operationType;
- (void)setMergeableValueIDs:(id)arg1;
- (void)setMetadataFetchedBlock:(id /* block */)arg1;

@end
