
@interface NewsArticles.ArticleViewerViewController : UIViewController <NANavigationControl, TSTabBarSplitViewAutoObserver> {
    void articleToolbarManager;
    void articleViewerImpressionManager;
    void barCompressionAnimationFactory;
    void barCompressionManager;
    void blueprintProvider;
    void commands;
    void coverViewManager;
    void eventHandler;
    void eventManager;
    void featureAvailability;
    void featureManager;
    void featureTransitions;
    void hasPresentedFirstPage;
    void interstitialAdManager;
    void isPagingEnabled;
    void navigationItemStyle;
    void observableScrollView;
    void onPagePresented;
    void pageBlueprintProvider;
    void pageSheetPresentationObserver;
    void pageViewController;
    void paidAccessChecker;
    void pendingPageIdentifier;
    void prewarm;
    void shareMenuItemManager;
    void state;
    void styler;
    void windowToolbarManager;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enableNavigation:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)smartInvertStatusDidChange;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
