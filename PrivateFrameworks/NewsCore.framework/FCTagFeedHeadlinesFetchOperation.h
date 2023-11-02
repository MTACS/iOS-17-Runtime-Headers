
@interface FCTagFeedHeadlinesFetchOperation : FCOperation {
    FCCloudContext * _cloudContext;
    <FCCoreConfiguration> * _configuration;
    FCFeedDescriptor * _feedDescriptor;
    id /* block */  _fetchCompletionHandler;
    bool  _fetchOrdinaryItemsFromCache;
    FCFeedRange * _freeFeedRange;
    long long  _maxFetchCount;
    FCFeedRange * _paidFeedRange;
    <FCFeedPersonalizing> * _personalizer;
    NSArray * _precedingHeadlines;
    FCFeedRange * _resultFetchedFreeRange;
    FCFeedRange * _resultFetchedPaidRange;
    bool  _resultFinished;
    NSArray * _resultOrdinaryHeadlines;
    NSSet * _shownArticleIDs;
    NSSet * _shownClusterIDs;
    NSDate * _topOfFeedDate;
}

@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, copy) FCFeedRange *freeFeedRange;
@property (nonatomic) long long maxFetchCount;
@property (nonatomic, copy) FCFeedRange *paidFeedRange;
@property (nonatomic, copy) NSArray *precedingHeadlines;
@property (nonatomic, copy) NSDate *topOfFeedDate;

- (void).cxx_destruct;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id /* block */)fetchCompletionHandler;
- (id)freeFeedRange;
- (id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 feedDescriptor:(id)arg3 personalizer:(id)arg4;
- (long long)maxFetchCount;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (id)paidFeedRange;
- (void)performOperation;
- (id)precedingHeadlines;
- (void)prepareOperation;
- (void)resetForRetry;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setFreeFeedRange:(id)arg1;
- (void)setMaxFetchCount:(long long)arg1;
- (void)setPaidFeedRange:(id)arg1;
- (void)setPrecedingHeadlines:(id)arg1;
- (void)setTopOfFeedDate:(id)arg1;
- (id)topOfFeedDate;

@end
