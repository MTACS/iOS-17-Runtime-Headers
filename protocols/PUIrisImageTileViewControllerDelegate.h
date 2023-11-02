
@protocol PUIrisImageTileViewControllerDelegate <NSObject>

@optional

- (<UIGestureRecognizerDelegate> *)irisImageTileViewController:(PUIrisImageTileViewController *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)irisImageTileViewControllerDidBeginHinting:(PUIrisImageTileViewController *)arg1;
- (void)irisImageTileViewControllerDidBeginPlaying:(PUIrisImageTileViewController *)arg1;
- (void)irisImageTileViewControllerDidEndPlaying:(PUIrisImageTileViewController *)arg1;
- (void)irisImageTileViewControllerDidEndVitality:(PUIrisImageTileViewController *)arg1;
- (UIView *)irisImageTileViewControllerViewHostingGestureRecognizers:(PUIrisImageTileViewController *)arg1;
- (void)irisImageTileViewControllerWillEndPlaying:(PUIrisImageTileViewController *)arg1;

@end
