
@interface NewsUI2.PuzzleViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void $__lazy_storage_$_markerBarButtonItem;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_radarBarButtonItem;
    void bundleSubscriptionManager;
    void commandCenter;
    void currentAccessoryView;
    void currentMenuItems;
    void currentPuzzleColorTheme;
    void currentToolbarMenuItems;
    void didSetInitialTitle;
    void eventHandler;
    void hardPaywallViewController;
    void historyService;
    void identifier;
    void initialIsPencilInputExpected;
    void initialLeftBarButtonItems;
    void newsActivityManager;
    void onboardingManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  paywall;
    void publisherLogo;
    void publisherLogoProvider;
    void puzzle;
    void puzzleEmbedViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  puzzleModel;
    void puzzleRadarReporter;
    void sharingActivityItemFactory;
    void styler;
    void subscribed;
    void toolbarManager;
    void toolbarTemplateItems;
    void tracker;
    void visibilityEventManager;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)modalHostViewDidAppear;
- (void)modalHostViewDidDisappear;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(bool)arg1;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
