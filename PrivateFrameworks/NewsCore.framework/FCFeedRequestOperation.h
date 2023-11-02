
@interface FCFeedRequestOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    NSDictionary * _databaseLookupsByFeedID;
    FCEdgeCacheHint * _edgeCacheHint;
    unsigned long long  _expectedNetworkEventCount;
    FCFeedDatabase * _feedDatabase;
    NSArray * _feedRequests;
    NSDictionary * _feedRequestsByFeedID;
    NSArray * _feedTransformations;
    unsigned long long  _maxCount;
    NSMutableArray * _mutableNetworkEvents;
    NSSet * _nonExpendableFeedIDs;
    long long  _options;
    NSObject<NSCopying> * _prewarmRequestKey;
    unsigned long long  _queryBudget;
    id /* block */  _requestCompletionHandler;
    id /* block */  _requestCompletionHandlerWithHeldRecords;
    NSMutableDictionary * _resultFeedResponses;
    FCHeldRecords * _resultHeldArticleRecords;
    FCHeldRecords * _resultHeldIssueRecords;
    FCHeldRecords * _resultHeldTagRecords;
}

@property (nonatomic, retain) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long expectedNetworkEventCount;
@property (nonatomic, retain) FCFeedDatabase *feedDatabase;
@property (nonatomic, copy) NSArray *feedRequests;
@property (nonatomic, copy) NSArray *feedTransformations;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic, readonly) NSArray *networkEvents;
@property (nonatomic) long long options;
@property (nonatomic, copy) NSObject<NSCopying> *prewarmRequestKey;
@property (nonatomic, copy) id /* block */ requestCompletionHandler;
@property (nonatomic, copy) id /* block */ requestCompletionHandlerWithHeldRecords;

+ (id)feedRequestContentEnvironmentTokenWithContext:(id)arg1;

- (void).cxx_destruct;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id)configuration;
- (id)context;
- (id)edgeCacheHint;
- (unsigned long long)expectedNetworkEventCount;
- (id)feedDatabase;
- (id)feedRequests;
- (id)feedTransformations;
- (id)init;
- (unsigned long long)maxCount;
- (unsigned long long)maxRetries;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (long long)options;
- (void)performOperation;
- (void)prepareOperation;
- (id)prewarmRequestKey;
- (id /* block */)requestCompletionHandler;
- (id /* block */)requestCompletionHandlerWithHeldRecords;
- (void)resetForRetry;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setExpectedNetworkEventCount:(unsigned long long)arg1;
- (void)setFeedDatabase:(id)arg1;
- (void)setFeedRequests:(id)arg1;
- (void)setFeedTransformations:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setOptions:(long long)arg1;
- (void)setPrewarmRequestKey:(id)arg1;
- (void)setRequestCompletionHandler:(id /* block */)arg1;
- (void)setRequestCompletionHandlerWithHeldRecords:(id /* block */)arg1;
- (bool)validateOperation;

@end
