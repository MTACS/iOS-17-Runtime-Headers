
@interface _UITabBarControllerVisualStyle : NSObject {
    UITabBarController * _tabBarController;
}

@property (nonatomic, readonly) UITabBarController *tabBarController;

- (void).cxx_destruct;
- (unsigned long long)defaultMaxItems;
- (id)initWithTabBarController:(id)arg1;
- (void)loadViews;
- (void)prepare;
- (id)tabBarController;
- (long long)tabBarPosition;
- (void)teardown;
- (bool)transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)updateConstraints;
- (void)updateViewControllers:(bool)arg1;

@end
