
@interface SeymourUI.WorkoutPlanSurveyViewController : UIViewController {
    void actionPresenter;
    void contentInsetInitialBehavior;
    void currentContentInsetBehavior;
    void dataProvider;
    void dependencies;
    void eventHub;
    void isTransitioningContentInset;
    void magicPocketView;
    void platform;
    void resignActiveObserver;
    void scrollObserver;
    void visibility;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onCancelButtonTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(bool)arg1;

@end
