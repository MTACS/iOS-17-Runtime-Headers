
@interface FCFeaturedArticlesOperation : FCOperation {
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    NSArray * _networkEvents;
    NSArray * _resultFeedItems;
}

@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, readonly) NSArray *networkEvents;

- (void).cxx_destruct;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
