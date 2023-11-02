
@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation <CKFetchDatabaseChangesOperationCallbacks> {
    id /* block */  _changeTokenUpdatedBlock;
    bool  _fetchAllChanges;
    id /* block */  _fetchDatabaseChangesCompletionBlock;
    id /* block */  _fetchDatabaseChangesCompletionBlock_wrapper;
    CKServerChangeToken * _previousServerChangeToken;
    id /* block */  _recordZoneWithIDChangedBlock;
    id /* block */  _recordZoneWithIDChangedBlock_wrapper;
    id /* block */  _recordZoneWithIDWasDeletedBlock;
    id /* block */  _recordZoneWithIDWasDeletedBlock_wrapper;
    id /* block */  _recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
    id /* block */  _recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock_wrapper;
    id /* block */  _recordZoneWithIDWasPurgedBlock;
    id /* block */  _recordZoneWithIDWasPurgedBlock_wrapper;
    unsigned long long  _resultsLimit;
    CKServerChangeToken * _serverChangeToken;
    long long  _status;
    NSMutableSet * _zoneIDsForMetrics;
}

@property (nonatomic, copy) id /* block */ changeTokenUpdatedBlock;
@property (nonatomic, readonly) <CKFetchDatabaseChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchDatabaseChangesCompletionBlock_wrapper;
@property (nonatomic, readonly) CKFetchDatabaseChangesOperationInfo *operationInfo;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock_wrapper;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock_wrapper;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock_wrapper;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasPurgedBlock_wrapper;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;
@property (nonatomic, retain) NSMutableSet *zoneIDsForMetrics;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)changeTokenUpdatedBlock;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (bool)fetchAllChanges;
- (id /* block */)fetchDatabaseChangesCompletionBlock;
- (id /* block */)fetchDatabaseChangesCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleChangeForRecordZoneID:(id)arg1;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 databaseChangesStatus:(long long)arg2 error:(id)arg3 reply:(id /* block */)arg4;
- (void)handleDeleteForRecordZoneID:(id)arg1;
- (void)handleEncryptedDataResetForRecordZoneID:(id)arg1;
- (void)handlePurgeForRecordZoneID:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithPreviousServerChangeToken:(id)arg1;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDChangedBlock_wrapper;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock_wrapper;
- (id /* block */)recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
- (id /* block */)recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock_wrapper;
- (id /* block */)recordZoneWithIDWasPurgedBlock;
- (id /* block */)recordZoneWithIDWasPurgedBlock_wrapper;
- (unsigned long long)resultsLimit;
- (id)serverChangeToken;
- (void)setChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchDatabaseChangesCompletionBlock:(id /* block */)arg1;
- (void)setFetchDatabaseChangesCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDChangedBlock_wrapper:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock_wrapper:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock_wrapper:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasPurgedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasPurgedBlock_wrapper:(id /* block */)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setZoneIDsForMetrics:(id)arg1;
- (long long)status;
- (id)zoneIDsForMetrics;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingValues;
- (void)ic_removeAllCompletionBlocks;

@end
