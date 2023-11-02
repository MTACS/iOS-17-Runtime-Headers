
@interface FCOfflineANFArticlesFetchOperation : FCOperation {
    id /* block */  _archiveHandler;
    NSArray * _articleIDs;
    bool  _cachedOnly;
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    <FCFlintHelper> * _flintHelper;
    NSArray * _inputHeadlines;
    id /* block */  _interestTokenHandler;
    unsigned long long  _maxBatchSize;
    unsigned long long  _maxMissingArticles;
    id /* block */  _progressHandler;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (bool)validateOperation;

@end
