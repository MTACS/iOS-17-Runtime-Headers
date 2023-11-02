
@interface FCMyArticlesOperation : FCOperation {
    long long  _binOverride;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    FCDateRange * _dateRange;
    id /* block */  _feedItemCompletionBlock;
    bool  _includeEvergreenFeedItems;
    unsigned long long  _maxNumberOfFeedsToQuery;
    unsigned long long  _perFeedLimit;
    NSDictionary * _resultFeedContextByFeedID;
    NSArray * _resultFeedItems;
    bool  _scoreFeedItems;
    FCThreadSafeMutableDictionary * _scoreProfilesByConfigurationSet;
    <FCForYouQuerySidecar> * _sidecar;
    double  _timeSpentScoring;
    FCMyArticlesTiming * _timing;
}

@property (nonatomic) long long binOverride;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) FCDateRange *dateRange;
@property (nonatomic, copy) id /* block */ feedItemCompletionBlock;
@property (nonatomic) bool includeEvergreenFeedItems;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (nonatomic) unsigned long long perFeedLimit;
@property (nonatomic) bool scoreFeedItems;
@property (nonatomic, retain) <FCForYouQuerySidecar> *sidecar;
@property (nonatomic, readonly) FCMyArticlesTiming *timing;

+ (bool)prewarmDateRange:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (long long)binOverride;
- (id)configuration;
- (id)context;
- (id)dateRange;
- (id /* block */)feedItemCompletionBlock;
- (bool)includeEvergreenFeedItems;
- (id)init;
- (unsigned long long)maxNumberOfFeedsToQuery;
- (void)operationWillFinishWithError:(id)arg1;
- (unsigned long long)perFeedLimit;
- (void)performOperation;
- (bool)scoreFeedItems;
- (id)scoreProfilesForConfigurationSet:(long long)arg1;
- (void)setBinOverride:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDateRange:(id)arg1;
- (void)setFeedItemCompletionBlock:(id /* block */)arg1;
- (void)setIncludeEvergreenFeedItems:(bool)arg1;
- (void)setMaxNumberOfFeedsToQuery:(unsigned long long)arg1;
- (void)setPerFeedLimit:(unsigned long long)arg1;
- (void)setScoreFeedItems:(bool)arg1;
- (void)setSidecar:(id)arg1;
- (id)sidecar;
- (id)timing;
- (bool)validateOperation;

@end
