
@interface FCIssueArticlesOperation : FCOperation {
    FCCloudContext * _context;
    FCEdgeCacheHint * _edgeCacheHint;
    id /* block */  _fetchCompletionHandler;
    NSArray * _issueIDs;
    unsigned long long  _maxIssuesPerFetch;
    NSArray * _resultFeedItems;
}

@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic) unsigned long long maxIssuesPerFetch;

- (void).cxx_destruct;
- (id)edgeCacheHint;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;
- (id)initWithContext:(id)arg1 issues:(id)arg2;
- (unsigned long long)maxIssuesPerFetch;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setMaxIssuesPerFetch:(unsigned long long)arg1;
- (bool)validateOperation;

@end
