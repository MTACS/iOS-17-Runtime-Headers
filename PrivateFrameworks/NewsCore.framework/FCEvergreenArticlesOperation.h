
@interface FCEvergreenArticlesOperation : FCOperation {
    <FCBundleSubscriptionManagerType> * _bundleSubscriptionManager;
    id /* block */  _completionHandler;
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    NSArray * _evergreenArticleListIDs;
    NSArray * _networkEvents;
    NSArray * _resultFeedItems;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSArray *networkEvents;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 bundleSubscriptionManager:(id)arg3;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
