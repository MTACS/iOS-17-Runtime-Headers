
@interface TeaUI.TabBarNavigationController : TeaUI.NavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    void animateAlongsideTabBarSnapshot;
    void commandCenter;
    void rootViewController;
    void viewControllerDepth;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (id)description;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)setTabBarItem:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)tabBarItem;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
