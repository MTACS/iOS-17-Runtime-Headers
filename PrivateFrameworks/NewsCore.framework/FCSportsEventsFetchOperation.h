
@interface FCSportsEventsFetchOperation : FCOperation {
    <FCNewsAppConfigurationManager> * _appConfigurationManager;
    FCCachePolicy * _cachePolicy;
    <FCContentContext> * _context;
    <FCSportsEventsFetchOperationDelegate> * _delegate;
    id /* block */  _fetchCompletionHandler;
    NSArray * _resultSportsEvents;
    NSArray * _sportsEventIDs;
    FCTagController * _tagController;
}

@property (nonatomic, copy) FCCachePolicy *cachePolicy;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (id)cachePolicy;
- (id /* block */)fetchCompletionHandler;
- (id)initWithContext:(id)arg1 tagController:(id)arg2 sportsEventIDs:(id)arg3 delegate:(id)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCachePolicy:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
