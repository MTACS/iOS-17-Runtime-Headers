
@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {
    FCThreadSafeMutableArray * _allOperationErrors;
    CKRecordID * _canaryRecordID;
    NSDictionary * _changeTagsByRecordID;
    bool  _checkForDeletions;
    FCCKContentDatabase * _database;
    FCThreadSafeMutableSet * _deletedRecordIDs;
    NSArray * _desiredKeys;
    FCThreadSafeMutableDictionary * _errorsByRecordID;
    NSArray * _recordIDs;
    id /* block */  _refreshRecordsCompletionBlock;
    FCThreadSafeMutableSet * _refreshedRecordIDs;
    FCThreadSafeMutableArray * _remainingRecordIDBatches;
    FCThreadSafeMutableDictionary * _updatedRecordsByRecordID;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)validateOperation;

@end
