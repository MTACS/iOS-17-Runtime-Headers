
@protocol NUArticleContentSizeManager <NSObject>

@required

- (long long)contentScaleForArticle:(id <FCHeadlineProviding>)arg1;
- (NSString *)contentSizeCategoryForArticle:(id <FCHeadlineProviding>)arg1;
- (void)updateContentScale:(long long)arg1 forArticle:(id <FCHeadlineProviding>)arg2;
- (void)updateContentSizeCategory:(NSString *)arg1 forArticle:(id <FCHeadlineProviding>)arg2;

@end
