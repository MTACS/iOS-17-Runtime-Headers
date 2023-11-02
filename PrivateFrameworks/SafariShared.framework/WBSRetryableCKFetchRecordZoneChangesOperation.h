
@interface WBSRetryableCKFetchRecordZoneChangesOperation : WBSRetryableCKDatabaseOperation {
    NSDictionary * _configurationsByRecordZoneID;
    bool  _fetchAllChanges;
    id /* block */  _fetchRecordZoneChangesCompletionBlock;
    id /* block */  _recordWasChangedBlock;
    id /* block */  _recordWithIDWasDeletedBlock;
    id /* block */  _recordZoneChangeTokensUpdatedBlock;
    id /* block */  _recordZoneFetchCompletionBlock;
    NSArray * _recordZoneIDs;
}

@property (nonatomic, copy) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchRecordZoneChangesCompletionBlock;
@property (nonatomic, copy) id /* block */ recordWasChangedBlock;
@property (nonatomic, copy) id /* block */ recordWithIDWasDeletedBlock;
@property (nonatomic, copy) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (nonatomic, copy) id /* block */ recordZoneFetchCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id)configurationsByRecordZoneID;
- (bool)fetchAllChanges;
- (id /* block */)fetchRecordZoneChangesCompletionBlock;
- (id /* block */)recordWasChangedBlock;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id /* block */)recordZoneChangeTokensUpdatedBlock;
- (id /* block */)recordZoneFetchCompletionBlock;
- (id)recordZoneIDs;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setFetchRecordZoneChangesCompletionBlock:(id /* block */)arg1;
- (void)setRecordWasChangedBlock:(id /* block */)arg1;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneChangeTokensUpdatedBlock:(id /* block */)arg1;
- (void)setRecordZoneFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;

@end
