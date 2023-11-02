
@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCThreadSafeMutableArray * _allOperationErrors;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    FCThreadSafeMutableDictionary * _errorsByRecordID;
    id /* block */  _fetchRecordsCompletionBlock;
    unsigned long long  _maxBatchSize;
    NSArray * _recordIDs;
    FCThreadSafeMutableDictionary * _recordsByRecordID;
    FCThreadSafeMutableArray * _remainingRecordIDBatches;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)validateOperation;

@end
