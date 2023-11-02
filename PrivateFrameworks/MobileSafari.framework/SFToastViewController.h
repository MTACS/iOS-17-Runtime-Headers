
@interface SFToastViewController : UIViewController {
    UIVisualEffectView * _backgroundVisualEffectView;
    UIView * _contentContainerView;
    double  _contentOffset;
    NSLayoutConstraint * _contentPreferredHeightConstraint;
    NSLayoutConstraint * _contentPreferredWidthConstraint;
    NSLayoutConstraint * _contentTopConstraint;
    UIViewController * _contentViewController;
    <SFToastViewControllerDelegate> * _delegate;
    NSTimer * _dismissalTimer;
    UIPanGestureRecognizer * _panRecognizer;
    double  _remainingToastDuration;
    double  _toastDuration;
}

@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic) <SFToastViewControllerDelegate> *delegate;
@property (nonatomic) double toastDuration;

- (void).cxx_destruct;
- (void)_didReceivePan:(id)arg1;
- (void)_scheduleToastTimerIfNeeded;
- (id)contentViewController;
- (id)delegate;
- (id)initWithContentViewController:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToastDuration:(double)arg1;
- (double)toastDuration;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
