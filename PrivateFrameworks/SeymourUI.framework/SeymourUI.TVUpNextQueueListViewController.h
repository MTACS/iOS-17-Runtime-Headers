
@interface SeymourUI.TVUpNextQueueListViewController : UIViewController {
    void bag;
    void dataProvider;
    void dependencies;
    void dynamicOfferCoordinator;
    void eventHub;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void purchaseCoordinator;
    void purchaseHandler;
    void resignActiveObserver;
    void settlingTimer;
    void timerProvider;
    void visibility;
    void webUserInterfaceCoordinator;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)handleBackButtonPressed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
