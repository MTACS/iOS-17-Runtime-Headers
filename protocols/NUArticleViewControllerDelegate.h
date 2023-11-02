
@protocol NUArticleViewControllerDelegate <NSObject>

@optional

- (void)articleViewController:(NUArticleViewController *)arg1 didScrollToPosition:(SXScrollPosition *)arg2;
- (void)articleViewControllerDidScrollToBottomOfPrimaryContent:(NUArticleViewController *)arg1;

@end
