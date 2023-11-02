
@interface VideosUI.RootHostingViewController : UIViewController {
    void contentNavigationController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, retain) UITabBarItem *tabBarItem;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setTabBarItem:(id)arg1;
- (id)tabBarItem;
- (void)viewDidLoad;

@end
