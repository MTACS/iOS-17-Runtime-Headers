
@interface FCCKContentFetchOperation : FCNetworkOperation {
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    id /* block */  _fetchRecordsCompletionBlock;
    bool  _getPermanentAssetURLs;
    int  _networkEventType;
    id /* block */  _perRecordCompletionBlock;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSArray * _requestUUIDs;
    NSDictionary * _resultRecordsByRecordID;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)throttleGroup;
- (bool)validateOperation;

@end
