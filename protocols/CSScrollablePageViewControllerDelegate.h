
@protocol CSScrollablePageViewControllerDelegate <NSObject>

@required

- (void)scrollablePageViewController:(CSScrollablePageViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)scrollablePageViewController:(CSScrollablePageViewController *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)scrollablePageViewController:(CSScrollablePageViewController *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;

@end
