
@interface FCCKBatchedOrderFeedQueryOperation : FCOperation {
    NSDictionary * _additionalRequestHTTPHeaders;
    FCThreadSafeMutableArray * _allErrors;
    FCThreadSafeMutableArray * _allFeedItemAndArticleRecords;
    FCThreadSafeMutableArray * _allFeedResponses;
    FCThreadSafeMutableArray * _allIssueRecords;
    FCThreadSafeMutableArray * _allNetworkEvents;
    FCThreadSafeMutableArray * _allTagRecords;
    NSArray * _articleLinkKeys;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    FCEdgeCacheHint * _edgeCacheHint;
    NSArray * _feedRequests;
    id /* block */  _promiseRejectBlock;
    id /* block */  _promiseResolveBlock;
    id /* block */  _queryCompletionHandler;
    NFPromise * _queryCompletionPromise;
    unsigned long long  _queryPriority;
    unsigned long long  _resultsLimit;
}

@property (nonatomic, readonly) FCThreadSafeMutableArray *allErrors;
@property (nonatomic, readonly) FCThreadSafeMutableArray *allFeedItemAndArticleRecords;
@property (nonatomic, readonly) FCThreadSafeMutableArray *allFeedResponses;
@property (nonatomic, readonly) FCThreadSafeMutableArray *allIssueRecords;
@property (nonatomic, readonly) FCThreadSafeMutableArray *allNetworkEvents;
@property (nonatomic, readonly) FCThreadSafeMutableArray *allTagRecords;
@property (nonatomic, readonly, copy) id /* block */ promiseRejectBlock;
@property (nonatomic, readonly, copy) id /* block */ promiseResolveBlock;

- (void).cxx_destruct;
- (id)allErrors;
- (id)allFeedItemAndArticleRecords;
- (id)allFeedResponses;
- (id)allIssueRecords;
- (id)allNetworkEvents;
- (id)allTagRecords;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)promiseRejectBlock;
- (id /* block */)promiseResolveBlock;

@end
