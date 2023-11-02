
@interface FCCKMultiFetchQueryOperation : FCOperation {
    FCCKContentDatabase * _database;
    FCEdgeCacheHint * _edgeCacheHint;
    bool  _ignoreCache;
    NSDictionary * _knownRecordIDsToEtags;
    int  _networkEventType;
    NSArray * _networkEvents;
    id /* block */  _queryCompletionHandler;
    NSArray * _recordIDs;
    NSArray * _recordSpecs;
    NSDictionary * _recordSpecsByType;
    NSMutableArray * _resultFetchedRecords;
    NSMutableSet * _resultMissingRecordIDs;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)validateOperation;

@end
