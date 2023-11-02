
@protocol PUBarsControllerDelegate <NSObject>

@optional

- (<UIGestureRecognizerDelegate> *)barsController:(PUBarsController *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)barsControllerContentGuideInsetsDidChange:(PUBarsController *)arg1;
- (UIViewController *)barsControllerViewController:(PUBarsController *)arg1;
- (UIView *)barsControllerViewHostingGestureRecognizers:(PUBarsController *)arg1;

@end
