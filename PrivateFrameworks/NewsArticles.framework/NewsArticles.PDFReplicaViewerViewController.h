
@interface NewsArticles.PDFReplicaViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void backButton;
    void barVisibilityAnimator;
    void commands;
    void coverButton;
    void eventHandler;
    void eventManager;
    void featureAvailability;
    void issue;
    void navigationItemStyle;
    void newsPlusLabelItem;
    void newsPlusLabelVisibilityProvider;
    void nextButton;
    void pageBlueprintProvider;
    void pageSheetPresentationObserver;
    void pageViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  paywall;
    void paywallFactory;
    void paywallViewController;
    void renderer;
    void sessionManager;
    void sharingActivityItemFactory;
    void styler;
    void subscriptionController;
    void tableOfContentsVisibilityProvider;
    void titleView;
    void toolbarCoverFactory;
    void toolbarManager;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) bool prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) bool prefersStatusBarHidden;

- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)nextPageKeyCommand;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)previousPageKeyCommand;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
