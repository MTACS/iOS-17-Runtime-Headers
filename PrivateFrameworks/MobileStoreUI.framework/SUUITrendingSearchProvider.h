
@interface SUUITrendingSearchProvider : NSObject {
    SUUITrendingSearchPage * _cachedSearchPage;
    SUUIClientContext * _clientContext;
    NSOperationQueue * _operationQueue;
    NSMutableArray * _pendingCompletionBlocks;
    NSOperation * _runningRequestOperation;
}

@property (nonatomic, retain) SUUITrendingSearchPage *cachedSearchPage;
@property (nonatomic, readonly) NSOperationQueue *callbackQueue;
@property (nonatomic, readonly) SUUIClientContext *clientContext;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) NSMutableArray *pendingCompletionBlocks;
@property (nonatomic, retain) NSOperation *runningRequestOperation;

- (void).cxx_destruct;
- (id)cachedSearchPage;
- (id)callbackQueue;
- (void)clearCache;
- (id)clientContext;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (id)operationQueue;
- (id)pendingCompletionBlocks;
- (id)requestOperationWithPageURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)requestTrendingSearchPageWithURL:(id)arg1;
- (id)runningRequestOperation;
- (void)setCachedSearchPage:(id)arg1;
- (void)setRunningRequestOperation:(id)arg1;
- (void)trendingSearchPageWithURL:(id)arg1 completionBlock:(id /* block */)arg2;

@end
