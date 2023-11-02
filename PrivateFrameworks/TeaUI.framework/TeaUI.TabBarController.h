
@interface TeaUI.TabBarController : UITabBarController <UITabBarControllerDelegate> {
    void barView;
    void extendedDelegate;
    void primaryTabBarItemIdentifier;
    void styler;
    void tabBarOrder;
}

@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setViewControllers:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
