
@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation {
    unsigned long long  _articleCachePolicy;
    NSArray * _articleIDs;
    double  _articleMaximumCachedAge;
    <FCCoreConfiguration> * _configuration;
    <FCContentContext> * _context;
    NSArray * _ignoreCacheForArticleIDs;
    id /* block */  _interestTokenHandler;
    bool  _overrideArticleCachePolicy;
    bool  _overrideTagCachePolicy;
    NSArray * _resultHeadlines;
    bool  _shouldFilterHeadlinesWithoutSourceChannels;
    unsigned long long  _tagCachePolicy;
    double  _tagMaximumCachedAge;
}

@property unsigned long long articleCachePolicy;
@property (nonatomic, retain) NSArray *articleIDs;
@property double articleMaximumCachedAge;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSArray *ignoreCacheForArticleIDs;
@property (nonatomic, copy) id /* block */ interestTokenHandler;
@property bool overrideArticleCachePolicy;
@property bool overrideTagCachePolicy;
@property (nonatomic, retain) NSArray *resultHeadlines;
@property (nonatomic) bool shouldFilterHeadlinesWithoutSourceChannels;
@property unsigned long long tagCachePolicy;
@property double tagMaximumCachedAge;

- (void).cxx_destruct;
- (unsigned long long)articleCachePolicy;
- (id)articleIDs;
- (double)articleMaximumCachedAge;
- (id)completeFetchOperation;
- (id)configuration;
- (id)context;
- (id)determineAppropriateFetchStepsWithCompletion:(id /* block */)arg1;
- (id)fetchConfigWithCompletion:(id /* block */)arg1;
- (id)fetchRecordsWithCompletion:(id /* block */)arg1;
- (id)ignoreCacheForArticleIDs;
- (id)init;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;
- (id /* block */)interestTokenHandler;
- (bool)overrideArticleCachePolicy;
- (bool)overrideTagCachePolicy;
- (id)resultHeadlines;
- (void)setArticleCachePolicy:(unsigned long long)arg1;
- (void)setArticleIDs:(id)arg1;
- (void)setArticleMaximumCachedAge:(double)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setIgnoreCacheForArticleIDs:(id)arg1;
- (void)setInterestTokenHandler:(id /* block */)arg1;
- (void)setOverrideArticleCachePolicy:(bool)arg1;
- (void)setOverrideTagCachePolicy:(bool)arg1;
- (void)setResultHeadlines:(id)arg1;
- (void)setShouldFilterHeadlinesWithoutSourceChannels:(bool)arg1;
- (void)setTagCachePolicy:(unsigned long long)arg1;
- (void)setTagMaximumCachedAge:(double)arg1;
- (bool)shouldFilterHeadlinesWithoutSourceChannels;
- (unsigned long long)tagCachePolicy;
- (double)tagMaximumCachedAge;

@end
