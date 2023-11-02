
@interface TeaUI.TabBarSplitViewController : UISplitViewController <TSTabBarSplitViewFocusable, UISplitViewControllerDelegate> {
    void appearanceViewControllers;
    void commands;
    void eventManager;
    void extendedDelegate;
    void fullscreenTransitionCoverManager;
    void hasPerformedInitialLayout;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  modalContextCache;
    void options;
    void overlayToolbar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentationContextCache;
    void restoreStateCache;
    void secondaryNavigationControllerIdentifierBeforeCollapse;
    void splitViewFocus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stagedModalContextCache;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) long long currentSplitViewFocus;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)currentSplitViewFocus;
- (void)didReceiveMemoryWarning;
- (void)dismissalTransitionDidEndWithNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)keyCommands;
- (void)loadView;
- (void)openNewWindow;
- (long long)preferredDisplayMode;
- (void)presentationTransitionDidEndWithNotification:(id)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (bool)splitViewController:(id)arg1 showDetailViewController:(id)arg2 sender:(id)arg3;
- (bool)splitViewController:(id)arg1 showViewController:(id)arg2 sender:(id)arg3;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (void)splitViewControllerDidCollapse:(id)arg1;
- (void)splitViewControllerDidExpand:(id)arg1;
- (void)tabBarNavigationControllerDidPopWithNotification:(id)arg1;
- (long long)targetDisplayModeForActionInSplitViewController:(id)arg1;
- (void)toggleResponderPane;
- (void)toggleSideBarVisibility;
- (void)toggleSplitViewFocusTo:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
