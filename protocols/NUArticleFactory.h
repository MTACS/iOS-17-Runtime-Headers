
@protocol NUArticleFactory <NSObject>

@required

- (FCArticle *)createArticleForHeadline:(id <FCHeadlineProviding>)arg1;
- (NSArray *)createArticlesForArticleIDs:(NSArray *)arg1;

@end
