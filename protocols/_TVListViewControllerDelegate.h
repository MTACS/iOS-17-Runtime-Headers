
@protocol _TVListViewControllerDelegate <NSObject>

@required

- (void)listViewController:(_TVListViewController *)arg1 updatePreviewViewController:(UIViewController *)arg2;

@optional

- (void)listViewController:(_TVListViewController *)arg1 didScrollWithScrollView:(UIScrollView *)arg2;

@end
