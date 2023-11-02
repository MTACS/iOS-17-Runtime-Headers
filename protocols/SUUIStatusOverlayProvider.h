
@protocol SUUIStatusOverlayProvider <NSObject>

@optional

- (UIViewController *)overlayViewControllerWithBackgroundStyle:(long long)arg1;
- (bool)shouldShowStatusOverlayForViewController:(UIViewController *)arg1;

@end
