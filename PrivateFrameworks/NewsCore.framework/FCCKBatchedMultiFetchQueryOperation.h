
@interface FCCKBatchedMultiFetchQueryOperation : FCOperation {
    FCThreadSafeMutableArray * _allErrors;
    id /* block */  _batchCompletionHandler;
    FCCKContentDatabase * _database;
    FCEdgeCacheHint * _edgeCacheHint;
    bool  _ignoreCache;
    NSDictionary * _knownRecordIDsToEtags;
    unsigned long long  _maxBatchSize;
    int  _networkEventType;
    NSArray * _networkEvents;
    id /* block */  _queryCompletionHandler;
    NSArray * _recordIDs;
    NSArray * _recordSpecs;
    FCThreadSafeMutableArray * _remainingRecordIDBatches;
    FCThreadSafeMutableSet * _resultMissingRecordIDs;
    FCThreadSafeMutableArray * _resultRecords;
}

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (bool)validateOperation;

@end
