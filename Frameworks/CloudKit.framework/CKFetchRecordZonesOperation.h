
@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks> {
    id /* block */  _fetchRecordZonesCompletionBlock;
    id /* block */  _fetchRecordZonesCompletionBlock_wrapper;
    bool  _ignorePCSFailures;
    bool  _isFetchAllRecordZonesOperation;
    id /* block */  _perRecordZoneCompletionBlock;
    id /* block */  _perRecordZoneCompletionBlock_wrapper;
    NSMutableDictionary * _recordZoneErrors;
    NSArray * _recordZoneIDs;
    NSMutableDictionary * _recordZonesByZoneID;
}

@property (nonatomic, readonly) <CKFetchRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ fetchRecordZonesCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchRecordZonesCompletionBlock_wrapper;
@property (nonatomic) bool ignorePCSFailures;
@property (nonatomic) bool isFetchAllRecordZonesOperation;
@property (nonatomic, readonly) CKFetchRecordZonesOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perRecordZoneCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordZoneCompletionBlock_wrapper;
@property (nonatomic, retain) NSMutableDictionary *recordZoneErrors;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneID;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;
+ (id)fetchAllRecordZonesOperation;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)fetchRecordZonesCompletionBlock;
- (id /* block */)fetchRecordZonesCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleFetchForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (bool)ignorePCSFailures;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1;
- (bool)isFetchAllRecordZonesOperation;
- (id /* block */)perRecordZoneCompletionBlock;
- (id /* block */)perRecordZoneCompletionBlock_wrapper;
- (void)performCKOperation;
- (id)recordZoneErrors;
- (id)recordZoneIDs;
- (id)recordZonesByZoneID;
- (id)relevantZoneIDs;
- (void)setFetchRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setFetchRecordZonesCompletionBlockIVar:(id /* block */)arg1;
- (void)setFetchRecordZonesCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setIgnorePCSFailures:(bool)arg1;
- (void)setIsFetchAllRecordZonesOperation:(bool)arg1;
- (void)setPerRecordZoneCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordZoneCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;

@end
