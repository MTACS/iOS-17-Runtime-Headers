
@interface NewsUI2.MagazineFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUDeselectable, TUKeyCommandTraversable> {
    void barCompressionManager;
    void blueprintLayoutProvider;
    void blueprintSelectionProvider;
    void blueprintViewController;
    void bundlePurchasePrewarmer;
    void commandContainer;
    void eventHandler;
    void feedPaywallConfigFactory;
    void isBeingUsedAsPlugin;
    void newsActivityManager;
    void offlineAlertControllerFactory;
    void pluggableDelegate;
    void sharingActivityProviderFactory;
    void styler;
}

- (void).cxx_destruct;
- (void)deselect;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)startTraversingWithDirection:(long long)arg1;
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
