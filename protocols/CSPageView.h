
@protocol CSPageView

@required

- (double)contentWidth;
- (UIViewController<CSPageViewControllerProtocol> *)pageViewController;
- (void)setContentWidth:(double)arg1;
- (void)setPageViewController:(UIViewController<CSPageViewControllerProtocol> *)arg1;

@end
