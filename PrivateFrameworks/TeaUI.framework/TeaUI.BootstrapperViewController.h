
@interface TeaUI.BootstrapperViewController : UIViewController {
    void mainViewController;
    void onboardingViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
