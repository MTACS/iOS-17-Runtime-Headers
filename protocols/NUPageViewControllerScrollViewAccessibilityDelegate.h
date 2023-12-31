
@protocol NUPageViewControllerScrollViewAccessibilityDelegate <NSObject>

@required

- (void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(NUPageViewControllerScrollView *)arg1;
- (void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(NUPageViewControllerScrollView *)arg1;

@end
