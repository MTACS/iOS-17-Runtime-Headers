
@protocol NUArticleViewControllerFactory <NSObject>

@required

- (NUArticleViewController *)createArticleViewControllerWithArticle:(FCArticle *)arg1 issue:(FCIssue *)arg2 context:(NUArticleContext *)arg3 relativePriority:(long long)arg4 articleHostViewController:(NUArticleHostViewController *)arg5;
- (NSHashTable *)loadingListeners;

@end
