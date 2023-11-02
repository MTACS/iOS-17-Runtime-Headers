
@interface GameCenterUI.DashboardSplitViewController : GameCenterUI.BaseDoubleColumnSplitViewController {
    void $__lazy_storage_$_dismissHandler;
    void $__lazy_storage_$_primaryNavigationController;
    void $__lazy_storage_$_sidebarViewController;
    void cacheSecondaryNavigationControllers;
    void launchContext;
    void request;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2;
- (long long)splitViewController:(id)arg1 topColumnForCollapsingToProposedTopColumn:(long long)arg2;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
