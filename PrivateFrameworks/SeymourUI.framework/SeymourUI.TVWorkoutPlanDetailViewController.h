
@interface SeymourUI.TVWorkoutPlanDetailViewController : UIViewController {
    void dataProvider;
    void dependencies;
    void eventHub;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastFocusedIndexPath;
    void layout;
    void platform;
    void resignActiveObserver;
    void settlingTimer;
    void storefrontLocalizer;
    void timerProvider;
    void titleLabel;
    void visibility;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
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
