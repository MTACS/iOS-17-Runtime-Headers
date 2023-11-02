
@interface SeymourUI.WorkoutPlanPreferencesViewController : UIViewController {
    void dataProvider;
    void dependencies;
    void eventHub;
    void platform;
    void preferenceType;
    void primaryActionButton;
    void resignActiveObserver;
    void visibility;
    void workoutPlanStringBuilder;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onCancelButtonTapped:(id)arg1;
- (void)onUpdateButtonTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
