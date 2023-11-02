
@interface SeymourUI.WorkoutPlanScheduleViewController : UIViewController {
    void calendarCoordinator;
    void dataProvider;
    void dependencies;
    void eventHub;
    void hostedContentCoordinator;
    void isViewTransitioningToSize;
    void latestContentSize;
    void navigationTitleView;
    void platform;
    void resignActiveObserver;
    void storefrontLocalizer;
    void upNextQueueButton;
    void upNextQueueButtonPresenter;
    void workoutPlanStringBuilder;
}

- (void).cxx_destruct;
- (void)backButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
