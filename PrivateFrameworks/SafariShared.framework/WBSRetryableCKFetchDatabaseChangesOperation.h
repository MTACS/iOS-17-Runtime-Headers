
@interface WBSRetryableCKFetchDatabaseChangesOperation : WBSRetryableCKDatabaseOperation {
    id /* block */  _changeTokenUpdatedBlock;
    bool  _fetchAllChanges;
    id /* block */  _fetchDatabaseChangesCompletionBlock;
    CKServerChangeToken * _previousServerChangeToken;
    id /* block */  _recordZoneWithIDChangedBlock;
    id /* block */  _recordZoneWithIDWasDeletedBlock;
    id /* block */  _recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
    id /* block */  _recordZoneWithIDWasPurgedBlock;
    unsigned long long  _resultsLimit;
}

@property (nonatomic, copy) id /* block */ changeTokenUpdatedBlock;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordZoneWithIDChangedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
@property (nonatomic, copy) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (nonatomic) unsigned long long resultsLimit;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)changeTokenUpdatedBlock;
- (bool)fetchAllChanges;
- (id /* block */)fetchDatabaseChangesCompletionBlock;
- (id)previousServerChangeToken;
- (id /* block */)recordZoneWithIDChangedBlock;
- (id /* block */)recordZoneWithIDWasDeletedBlock;
- (id /* block */)recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
- (id /* block */)recordZoneWithIDWasPurgedBlock;
- (unsigned long long)resultsLimit;
- (void)setChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchDatabaseChangesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock:(id /* block */)arg1;
- (void)setRecordZoneWithIDWasPurgedBlock:(id /* block */)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
