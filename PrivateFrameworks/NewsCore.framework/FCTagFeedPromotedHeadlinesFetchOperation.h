
@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    FCCloudContext * _cloudContext;
    <FCCoreConfiguration> * _configuration;
    double  _expireAfterTimeWindow;
    id /* block */  _fetchCompletionHandler;
    NSArray * _resultHeadlines;
    NSString * _tagID;
}

@property (nonatomic, copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (id /* block */)fetchCompletionHandler;
- (id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 tagID:(id)arg3 expireAfterTimeWindow:(double)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
