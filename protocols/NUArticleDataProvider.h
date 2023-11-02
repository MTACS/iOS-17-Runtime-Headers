
@protocol NUArticleDataProvider <NSObject>

@required

- (FCArticle *)article;
- (NSString *)articleID;
- (void)cancelAssetPrefetch;
- (NSArray *)linkedContentProviders;
- (void)loadContextWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SXContext *, <NUFontRegistrator> *, NSError *, void*
- (void)prefetchAssets;
- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;

@end
