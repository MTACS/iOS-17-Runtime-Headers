
@interface FCTodayFeedConfigOperation : FCOperation {
    <FCNewsAppConfiguration> * _appConfig;
    FCCachePolicy * _cachePolicy;
    NFUnfairLock * _completionLock;
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    FCTodayFeedConfigRequest * _request;
    NSData * _resultCKConfigData;
    NSDictionary * _resultCKRecordsByType;
    NSData * _resultNewsEdgeConfigData;
    id /* block */  _reusableCompletionHandler;
}

@property (nonatomic, readonly) <FCNewsAppConfiguration> *appConfig;
@property (nonatomic, copy) FCCachePolicy *cachePolicy;
@property (nonatomic, readonly) NFUnfairLock *completionLock;
@property (nonatomic, readonly) <FCContentContext> *context;
@property (copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, readonly, copy) FCTodayFeedConfigRequest *request;
@property (nonatomic, retain) NSData *resultCKConfigData;
@property (nonatomic, retain) NSDictionary *resultCKRecordsByType;
@property (nonatomic, retain) NSData *resultNewsEdgeConfigData;
@property (nonatomic, copy) id /* block */ reusableCompletionHandler;

- (void).cxx_destruct;
- (id)_fetchFromCK;
- (id)_fetchFromNewsEdge;
- (id)appConfig;
- (id)cachePolicy;
- (id)completionLock;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)initWithContext:(id)arg1 appConfig:(id)arg2 request:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)request;
- (id)resultCKConfigData;
- (id)resultCKRecordsByType;
- (id)resultNewsEdgeConfigData;
- (id /* block */)reusableCompletionHandler;
- (void)setCachePolicy:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setResultCKConfigData:(id)arg1;
- (void)setResultCKRecordsByType:(id)arg1;
- (void)setResultNewsEdgeConfigData:(id)arg1;
- (void)setReusableCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
