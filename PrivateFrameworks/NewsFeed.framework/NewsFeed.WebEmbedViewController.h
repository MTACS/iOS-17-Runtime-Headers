
@interface NewsFeed.WebEmbedViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void _lastDatastoreUpdate;
    void activityIndicator;
    void configurationProvider;
    void contentFrame;
    void contentFrameChanged;
    void coordinator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dataFeedURL;
    void debugLoadView;
    void debugSportsView;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  embedURL;
    void errorProvider;
    void errorState;
    void errorView;
    void feedConfiguration;
    void interactionProvider;
    void isResizable;
    void layoutIdentifier;
    void loadedState;
    void location;
    void onEmbedInteraction;
    void onReuse;
    void pictureInPictureState;
    void preferredContentSizeCategoryOnPopulate;
    void presentationManager;
    void resizingProvider;
    void showsLoadingSpinner;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sourceURL;
    void sportsDataVisualization;
    void sportsEventManager;
    void stateMachine;
    void tapGestureRecognizer;
    void viewportSize;
    void webContentViewController;
    void webLinkPresentingViewController;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)handleTapWithRecognizer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setAccessibilityElements:(id)arg1;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
