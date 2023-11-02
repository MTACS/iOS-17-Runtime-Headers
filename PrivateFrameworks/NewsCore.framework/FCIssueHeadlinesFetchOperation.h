
@interface FCIssueHeadlinesFetchOperation : FCOperation {
    FCCachePolicy * _cachePolicy;
    FCCloudContext * _context;
    id /* block */  _fetchCompletionHandler;
    NSArray * _issueIDs;
    NSDictionary * _resultHeadlinesByIssue;
}

@property (nonatomic, copy) FCCachePolicy *cachePolicy;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (id)cachePolicy;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;
- (id)initWithContext:(id)arg1 issues:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCachePolicy:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
