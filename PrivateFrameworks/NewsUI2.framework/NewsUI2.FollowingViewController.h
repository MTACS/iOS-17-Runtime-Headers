
@interface NewsUI2.FollowingViewController : TUViewController <TSTabBarSplitViewAutoObserver, TSViewControllerTabbable> {
    void $__lazy_storage_$_sidebarBarButtonItem;
    void blueprintSelectionProvider;
    void blueprintViewController;
    void bundleSubscriptionManager;
    void commands;
    void eventHandler;
    void newsActivityManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousSelectedIndexPath;
    void purchaseController;
    void searchCoordinator;
    void styler;
}

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentScrollView;
- (void)delete:(id)arg1;
- (void)handleSidebarWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)tabBarControllerDidDoubleTapBarButtonItem:(id)arg1;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(bool)arg1;
- (void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)arg1;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
