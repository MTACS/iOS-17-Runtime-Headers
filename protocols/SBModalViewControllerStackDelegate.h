
@protocol SBModalViewControllerStackDelegate <NSObject>

@optional

- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 willDismissViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 willPresentViewController:(UIViewController *)arg2;

@end
