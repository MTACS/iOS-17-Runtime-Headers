
@interface WBSRetryableCKFetchRecordZonesOperation : WBSRetryableCKDatabaseOperation {
    id /* block */  _fetchRecordZonesCompletionBlock;
    id /* block */  _perRecordZoneCompletionBlock;
    NSArray * _recordZoneIDs;
}

@property (nonatomic, copy) id /* block */ fetchRecordZonesCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordZoneCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)fetchRecordZonesCompletionBlock;
- (id /* block */)perRecordZoneCompletionBlock;
- (id)recordZoneIDs;
- (void)setFetchRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordZoneCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;

@end
