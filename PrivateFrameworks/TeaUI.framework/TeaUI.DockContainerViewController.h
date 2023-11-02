
@interface TeaUI.DockContainerViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    void $__lazy_storage_$_dockHeightConstraint;
    void $__lazy_storage_$_dockedView;
    void $__lazy_storage_$_expandedViewController;
    void _rootViewController;
    void commandCenter;
    void dockView;
    void lazyDockableViewController;
    void presentationMode;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) bool shouldAutorotate;

- (void).cxx_destruct;
- (bool)accessibilityPerformMagicTap;
- (id)animationControllerForDismissedController:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)childViewControllerForStatusBarStyle;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dockedViewLongPressed;
- (void)dockedViewTapped;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)shouldAutorotate;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
