
@interface FCCurrentMagazineContentFetchOperation : FCOperation {
    FCCachePolicy * _cachedPolicy;
    NSArray * _configArticleIDs;
    NSArray * _configIssueIDs;
    long long  _contentOptions;
    FCCloudContext * _context;
    id /* block */  _fetchCompletionHandler;
    NSArray * _resultConfigHeadlines;
    NSArray * _resultConfigIssues;
    NSArray * _resultCurrentIssues;
    NSArray * _resultTrendingHeadlines;
    NSString * _trendingArticleListID;
}

@property (nonatomic, retain) FCCachePolicy *cachedPolicy;
@property (nonatomic) long long contentOptions;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (id)cachedPolicy;
- (long long)contentOptions;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (id)initWithContext:(id)arg1 configIssueIDs:(id)arg2 configArticleIDs:(id)arg3 trendingArticleListID:(id)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCachedPolicy:(id)arg1;
- (void)setContentOptions:(long long)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (bool)validateOperation;

@end
