
@protocol CCUIContentModuleContainer <NSObject>

@required

- (UIView *)contentContainerView;
- (bool)definesContentModuleContainer;
- (bool)isExpanded;
- (void)willDismissViewController:(UIViewController *)arg1;
- (void)willPresentViewController:(UIViewController *)arg1;

@end
