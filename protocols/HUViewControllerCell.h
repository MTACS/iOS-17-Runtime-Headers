
@protocol HUViewControllerCell <NSObject>

@required

- (void)addToParentViewController:(UIViewController *)arg1;
- (void)removeFromParentViewController;
- (void)setViewController:(UIViewController *)arg1;
- (UIViewController *)viewController;

@end
