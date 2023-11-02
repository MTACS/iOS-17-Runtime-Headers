
@interface SeymourUI.TVRootViewController : UIViewController {
    void accountProvider;
    void avatarFetcher;
    void bag;
    void contentAvailabilityClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentPlanIdentifier;
    void dataProvider;
    void dependencies;
    void dynamicOfferCoordinator;
    void engagementPresentability;
    void engagementPresentationCoordinator;
    void eventHub;
    void historicWorkoutPlanCompletionShown;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void layout;
    void marketingMetricFieldsProvider;
    void menuView;
    void newPlanCellFocusTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  planCompletionTracker;
    void platform;
    void purchaseCoordinator;
    void purchaseHandler;
    void remoteBrowsingSource;
    void resignActiveObserver;
    void rootMenuPresenter;
    void settlingTimer;
    void shouldSendBrowsingBegan;
    void storefrontLocalizer;
    void subscriptionToken;
    void timerProvider;
    void visibility;
    void webUserInterfaceCoordinator;
    void workoutDetailOpened;
    void workoutPlanClient;
    void workoutPlanCreationCoordinator;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)handleSignInTapped;
- (void)handleSignOutButtonLongPress;
- (void)handleSignOutTapped;
- (void)handleUpNextQueueButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
