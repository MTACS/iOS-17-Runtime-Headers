
@interface SeymourUI.WorkoutPlanTemplateDetailViewController : UIViewController {
    void allowsPlanActions;
    void bag;
    void contentInsetInitialBehavior;
    void currentContentInsetBehavior;
    void dataProvider;
    void dependencies;
    void eventHub;
    void isTransitioningContentInset;
    void platform;
    void resignActiveObserver;
    void storefrontLocalizer;
    void visibility;
    void workoutPlanStringBuilder;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (void)handleDoneButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
