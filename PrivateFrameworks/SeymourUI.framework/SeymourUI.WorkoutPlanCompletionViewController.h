
@interface SeymourUI.WorkoutPlanCompletionViewController : UIViewController {
    void $__lazy_storage_$_buttonContentContainer;
    void $__lazy_storage_$_buttonStack;
    void $__lazy_storage_$_headlineLabel;
    void $__lazy_storage_$_mainStack;
    void $__lazy_storage_$_medalStack;
    void $__lazy_storage_$_metricsContainer;
    void $__lazy_storage_$_repeatButton;
    void $__lazy_storage_$_scrollingStackView;
    void $__lazy_storage_$_textStack;
    void $__lazy_storage_$_textStackContainer;
    void descriptionLabel;
    void eventHub;
    void medalContainer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricPage;
    void platform;
    void presenter;
    void showActionButtons;
    void showRepeatButton;
    void styleProvider;
    void workoutPlanStringBuilder;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (void)doneButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)repeatButtonPressed;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
