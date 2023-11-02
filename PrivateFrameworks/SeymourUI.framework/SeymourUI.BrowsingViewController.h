
@interface SeymourUI.BrowsingViewController : UINavigationController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _analyticsConsentShowingEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _forceAnalayticsConsentAcknowledgement;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _welcomeAcknowledgementShowingEnabled;
    void bag;
    void browsingBeganEventState;
    void dependencies;
    void dynamicOfferCoordinator;
    void eventHub;
    void navigationRouter;
    void palette;
    void paletteViewController;
    void pictureInPicturePresenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  planCompletionTracker;
    void presentingAnalyticsConsent;
    void purchaseHandler;
    void rootViewController;
    void siriUserActivityHandler;
    void subscriptionToken;
    void webUserInterfaceCoordinator;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)scrollToTop;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
