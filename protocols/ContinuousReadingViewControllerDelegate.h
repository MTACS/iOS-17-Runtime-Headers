
@protocol ContinuousReadingViewControllerDelegate <NSObject>

@required

- (void)continuousReadingViewController:(ContinuousReadingViewController *)arg1 didCommitToLoadItem:(ContinuousReadingItem *)arg2;
- (void)continuousReadingViewController:(ContinuousReadingViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)continuousReadingViewControllerCommitToLoadPreviousItem:(ContinuousReadingViewController *)arg1;
- (double)continuousReadingViewControllerNextWebViewLandingOffset:(ContinuousReadingViewController *)arg1 includeBottomBar:(bool)arg2;
- (void)continuousReadingViewControllerWillCommitToLoadNextItem:(ContinuousReadingViewController *)arg1;

@end
