
@interface SeymourUI.CatalogModalityDetailViewController : UIViewController {
    void contentInsetInitialBehavior;
    void controllerDisplayCoordinator;
    void currentContentInsetBehavior;
    void currentNavigationBarTintColor;
    void currentStatusBarStyle;
    void dataProvider;
    void dependencies;
    void eventHub;
    void isBeyondScrollBoundary;
    void isTransitioningContentInset;
    void marketingHostedContentCoordinator;
    void marketingMessageViewControllerHandler;
    void platform;
    void resignActiveObserver;
    void serviceSubscriptionCache;
    void sortOptionsDataProvider;
    void standardNavigationBarTintColor;
    void storefrontLocalizer;
    void subscriptionToken;
    void upNextQueueButton;
    void upNextQueueButtonPresenter;
    void visibility;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreOptionsButtonTapped:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
