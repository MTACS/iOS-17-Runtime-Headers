
@protocol MKStackingViewControllerDelegate <NSObject>

@optional

- (void)stackingViewController:(MKStackingViewController *)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 heightForSeparatorBetweenUpperViewController:(UIViewController *)arg2 andLowerViewController:(UIViewController *)arg3;
- (double)stackingViewController:(MKStackingViewController *)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (void)stackingViewControllerDidEndScroll:(MKStackingViewController *)arg1;
- (void)stackingViewControllerDidLayoutViewControllers:(MKStackingViewController *)arg1;
- (double)stackingViewControllerHeightForTitleView:(MKStackingViewController *)arg1;
- (void)stackingViewControllerWillBeginScroll:(MKStackingViewController *)arg1;

@end
