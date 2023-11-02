
@protocol NUArticleHostViewControllerDelegate <NSObject>

@optional

- (void)articleHostViewController:(NUArticleHostViewController *)arg1 didScrollToPosition:(SXScrollPosition *)arg2;
- (void)articleHostViewControllerDidScrollToBottomOfPrimaryContent:(NUArticleHostViewController *)arg1;

@end
