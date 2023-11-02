
@interface FCFeedPrewarmOperation : FCOperation {
    <FCContentContext> * _contentContext;
    NSMutableDictionary * _feedIDsByCKFeedID;
    NFLazy * _lazyResultPromise;
    FCFeedPrewarmRequest * _prewarmRequest;
    NSMutableDictionary * _requestRangeByFeedID;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (nonatomic, readonly) NSMutableDictionary *feedIDsByCKFeedID;
@property (nonatomic, retain) NFLazy *lazyResultPromise;
@property (nonatomic, readonly) FCFeedPrewarmRequest *prewarmRequest;
@property (nonatomic, readonly) NSMutableDictionary *requestRangeByFeedID;

- (void).cxx_destruct;
- (id)_commitQueryResult:(id)arg1;
- (void)commitResultsOnceWithCompletionHandler:(id /* block */)arg1;
- (id)contentContext;
- (id)feedIDsByCKFeedID;
- (id)initWithPrewarmRequest:(id)arg1 contentContext:(id)arg2;
- (id)lazyResultPromise;
- (void)performOperation;
- (id)prewarmRequest;
- (id)requestRangeByFeedID;
- (void)setLazyResultPromise:(id)arg1;

@end
