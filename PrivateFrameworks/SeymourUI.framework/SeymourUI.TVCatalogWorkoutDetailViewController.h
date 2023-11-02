
@interface SeymourUI.TVCatalogWorkoutDetailViewController : UIViewController {
    void artworkView;
    void bag;
    void bottomBlurView;
    void dataProvider;
    void dependencies;
    void dynamicOfferCoordinator;
    void ellipsisButton;
    void eventHub;
    void gradientMaskLayer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void layout;
    void marketingMetricFieldsProvider;
    void menuPresenter;
    void platform;
    void purchaseCoordinator;
    void purchaseHandler;
    void resignActiveObserver;
    void settlingTimer;
    void shroudView;
    void storefrontLocalizer;
    void subtitleLabel;
    void timerProvider;
    void titleLabel;
    void visibility;
    void webUserInterfaceCoordinator;
}

@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
