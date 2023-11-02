
@interface AXUIRootViewController : UIViewController

- (bool)_canShowWhileLocked;
- (bool)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(bool)arg2;
- (id)description;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;

@end
