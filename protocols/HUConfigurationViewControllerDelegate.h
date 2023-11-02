
@protocol HUConfigurationViewControllerDelegate <NSObject>

@required

- (void)viewController:(UIViewController<HUConfigurationViewController> *)arg1 didFinishWithConfigurationResults:(NSDictionary *)arg2;
- (void)viewControllerDidGoBack:(UIViewController<HUConfigurationViewController> *)arg1;
- (void)viewControllerWillAppear:(UIViewController<HUConfigurationViewController> *)arg1;

@end
