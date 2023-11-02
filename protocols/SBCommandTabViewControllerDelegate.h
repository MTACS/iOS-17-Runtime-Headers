
@protocol SBCommandTabViewControllerDelegate <NSObject>

@required

- (void)viewController:(SBCommandTabViewController *)arg1 selectedApplicationWithDisplayItem:(SBDisplayItem *)arg2;
- (void)viewControllerWantsDismissal:(SBCommandTabViewController *)arg1;

@end
