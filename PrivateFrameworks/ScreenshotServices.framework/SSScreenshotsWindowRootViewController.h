
@interface SSScreenshotsWindowRootViewController : UIViewController {
    UIViewController * _managedViewController;
}

@property (nonatomic, retain) UIViewController *managedViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)managedViewController;
- (void)setManagedViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
