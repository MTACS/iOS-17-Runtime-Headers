
@interface FCIssuesFetchOperation : FCOperation {
    FCCachePolicy * _cachePolicy;
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    id /* block */  _interestTokenHandler;
    NSArray * _issueIDs;
    NSArray * _resultIssues;
}

@property (nonatomic, copy) FCCachePolicy *cachePolicy;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, copy) id /* block */ interestTokenHandler;
@property (nonatomic, retain) NSArray *issueIDs;
@property (nonatomic, retain) NSArray *resultIssues;

- (void).cxx_destruct;
- (id)cachePolicy;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;
- (id /* block */)interestTokenHandler;
- (id)issueIDs;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultIssues;
- (void)setCachePolicy:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setInterestTokenHandler:(id /* block */)arg1;
- (void)setIssueIDs:(id)arg1;
- (void)setResultIssues:(id)arg1;
- (bool)validateOperation;

@end
