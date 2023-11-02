
@interface FCLatestStoriesOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    FCDateRange * _dateRange;
    id /* block */  _headlinesCompletionHandler;
    unsigned long long  _perFeedLimit;
    NSArray * _resultHeadlines;
    unsigned long long  _totalLimit;
}

@property (nonatomic, readonly) <FCCoreConfiguration> *configuration;
@property (nonatomic, readonly) FCCloudContext *context;
@property (nonatomic, readonly) FCDateRange *dateRange;
@property (nonatomic, copy) id /* block */ headlinesCompletionHandler;
@property (nonatomic, readonly) unsigned long long perFeedLimit;
@property (nonatomic, copy) NSArray *resultHeadlines;
@property (nonatomic, readonly) unsigned long long totalLimit;

- (void).cxx_destruct;
- (id)_constructFeedRequestsFromTags:(id)arg1;
- (void)_fetchTagsForQueryingWithCompletionHandler:(id /* block */)arg1;
- (id)configuration;
- (id)context;
- (id)dateRange;
- (id /* block */)headlinesCompletionHandler;
- (id)initWithContext:(id)arg1 dateRange:(id)arg2 totalLimit:(unsigned long long)arg3 perFeedLimit:(unsigned long long)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (unsigned long long)perFeedLimit;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultHeadlines;
- (void)setHeadlinesCompletionHandler:(id /* block */)arg1;
- (void)setResultHeadlines:(id)arg1;
- (unsigned long long)totalLimit;

@end
