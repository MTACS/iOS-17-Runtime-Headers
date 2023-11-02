
@interface SeymourUI.PlaylistDetailViewController : UIViewController {
    void bookmarkClient;
    void contentInsetInitialBehavior;
    void currentContentInsetBehavior;
    void currentNavigationBarTintColor;
    void dataProvider;
    void dependencies;
    void eventHub;
    void isBeyondScrollBoundary;
    void isTransitioningContentInset;
    void mediaTagStringBuilder;
    void platform;
    void queueActionsView;
    void queueActionsViewPresenter;
    void resignActiveObserver;
    void serviceSubscriptionCache;
    void standardNavigationBarTintColor;
    void storefrontLocalizer;
    void subscriptionToken;
    void visibility;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)backButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
