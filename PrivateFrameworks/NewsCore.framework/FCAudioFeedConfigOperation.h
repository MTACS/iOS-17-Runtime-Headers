
@interface FCAudioFeedConfigOperation : FCOperation {
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    NSString * _resultFeedConfig;
    NSString * _resultLegacyConfig;
}

@property (nonatomic, copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
