
@protocol NUArticlePrefetcherType

@required

- (void)addPrefetchInterestInArticleID:(NSString *)arg1 headline:(id <FCHeadlineProviding>)arg2;
- (<NUArticleDataProvider> *)prefetchedArticleDataProviderForArticleID:(NSString *)arg1;
- (void)removePrefetchInterestInArticleID:(NSString *)arg1;

@end
