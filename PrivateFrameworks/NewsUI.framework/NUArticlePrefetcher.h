
@interface NUArticlePrefetcher : NSObject <FCKeyedOperationQueueDelegate, NUArticlePrefetcherType> {
    NSMutableDictionary * _articleDataProviderCache;
    <NUArticleDataProviderFactory> * _articleDataProviderFactory;
    <NUArticleFactory> * _articleFactory;
    NSMutableSet * _failedArticleIDs;
    NSMutableDictionary * _headlinesForArticles;
    unsigned long long  _highWaterMark;
    NSMutableDictionary * _interestModificationDates;
    NSCountedSet * _interestedArticleIDs;
    FCKeyedOperationQueue * _prefetchQueue;
    NSTimer * _reprocessTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *articleDataProviderCache;
@property (nonatomic, retain) <NUArticleDataProviderFactory> *articleDataProviderFactory;
@property (nonatomic, retain) <NUArticleFactory> *articleFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *failedArticleIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *headlinesForArticles;
@property (nonatomic) unsigned long long highWaterMark;
@property (nonatomic, retain) NSMutableDictionary *interestModificationDates;
@property (nonatomic, retain) NSCountedSet *interestedArticleIDs;
@property (nonatomic, retain) FCKeyedOperationQueue *prefetchQueue;
@property (nonatomic, retain) NSTimer *reprocessTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_didChangeInterestedArticleIDs;
- (void)_flushDataProviderIfNeededForHeadline:(id)arg1;
- (void)_flushUnusedDataProvidersIfNeeded;
- (void)_reprocessInterestedArticleIDs;
- (void)_revisitSuspendedState;
- (void)addPrefetchInterestInArticleID:(id)arg1 headline:(id)arg2;
- (id)articleDataProviderCache;
- (id)articleDataProviderFactory;
- (id)articleFactory;
- (id)failedArticleIDs;
- (id)headlinesForArticles;
- (unsigned long long)highWaterMark;
- (id)init;
- (id)initWithArticleFactory:(id)arg1 articleDataProviderFactory:(id)arg2;
- (id)interestModificationDates;
- (id)interestedArticleIDs;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(id /* block */)arg3;
- (id)prefetchQueue;
- (id)prefetchedArticleDataProviderForArticleID:(id)arg1;
- (void)removePrefetchInterestInArticleID:(id)arg1;
- (id)reprocessTimer;
- (void)setArticleDataProviderCache:(id)arg1;
- (void)setArticleDataProviderFactory:(id)arg1;
- (void)setArticleFactory:(id)arg1;
- (void)setFailedArticleIDs:(id)arg1;
- (void)setHeadlinesForArticles:(id)arg1;
- (void)setHighWaterMark:(unsigned long long)arg1;
- (void)setInterestModificationDates:(id)arg1;
- (void)setInterestedArticleIDs:(id)arg1;
- (void)setPrefetchQueue:(id)arg1;
- (void)setReprocessTimer:(id)arg1;
- (id)workQueue;

@end
