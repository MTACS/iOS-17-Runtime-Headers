
@protocol NUArticleBarButtonItemManagerDelegate <NSObject>

@required

- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performDoneActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performNextActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManager:(NUArticleBarButtonItemManager *)arg1 performShareActionForBarButtonItem:(UIBarButtonItem *)arg2;
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(NUArticleBarButtonItemManager *)arg1;

@end
