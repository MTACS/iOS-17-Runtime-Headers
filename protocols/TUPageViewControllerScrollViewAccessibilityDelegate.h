
@protocol TUPageViewControllerScrollViewAccessibilityDelegate <NSObject>

@required

- (void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(TUPageViewControllerScrollView *)arg1;
- (void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(TUPageViewControllerScrollView *)arg1;

@end
