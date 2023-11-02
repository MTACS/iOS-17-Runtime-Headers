
@interface SeymourUI.TabBarController : UITabBarController {
    void eventHub;
    void miniPlayerHostPresenter;
    void miniPlayerViewController;
    void paletteView;
    void subscriptionToken;
}

@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
@property (nonatomic, readonly) bool shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
