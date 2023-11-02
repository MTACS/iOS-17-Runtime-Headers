
@interface FCCKOrderFeedQueryOperation : FCOperation {
    NSDictionary * _additionalRequestHTTPHeaders;
    NSArray * _articleLinkKeys;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    FCEdgeCacheHint * _edgeCacheHint;
    NSArray * _feedRequests;
    NSArray * _networkEvents;
    id /* block */  _queryCompletionHandler;
    unsigned long long  _queryPriority;
    NSError * _resultError;
    NSArray * _resultFeedItemAndArticleRecords;
    NSArray * _resultFeedResponses;
    NSArray * _resultIssueRecords;
    NSArray * _resultTagRecords;
    unsigned long long  _resultsLimit;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (bool)validateOperation;

@end
