
@interface FCDraftIssuesFetchOperation : FCOperation {
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    NSString * _issueListID;
    NSArray * _resultIssues;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, retain) NSString *issueListID;
@property (nonatomic, retain) NSArray *resultIssues;

- (void).cxx_destruct;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 issueListID:(id)arg2;
- (id)issueListID;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultIssues;
- (void)setContext:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setIssueListID:(id)arg1;
- (void)setResultIssues:(id)arg1;
- (bool)validateOperation;

@end
