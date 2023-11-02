
@interface FCCurrentAudioContentFetchOperation : FCOperation {
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    FCCurrentAudioContent * _resultCurrentContent;
}

@property (nonatomic, copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (id)_promiseConfiguration;
- (id)_promiseContentWithConfiguration:(id)arg1;
- (id)_promisePlaceholderContentWithConfiguration:(id)arg1;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
