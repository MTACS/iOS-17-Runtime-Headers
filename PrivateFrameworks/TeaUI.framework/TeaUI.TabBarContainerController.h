
@interface TeaUI.TabBarContainerController : TeaUI.NavigationController {
    void $__lazy_storage_$_intrinsicTabBar;
    void rootViewController;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;
- (void)viewDidLoad;

@end
