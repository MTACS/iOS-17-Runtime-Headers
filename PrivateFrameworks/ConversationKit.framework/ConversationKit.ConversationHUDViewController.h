
@interface ConversationKit.ConversationHUDViewController : UIViewController <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_backgroundMaterialView;
    void appLaunchButtonCancellable;
    void appLaunchPillView;
    void bottomConstraint;
    void cnkContentAlpha;
    void context;
    void controlsManager;
    void controlsView;
    void delegate;
    void detailsHeightLayoutConstraint;
    void detailsWidthLayoutConstraint;
    void ephemeralAlertCancellable;
    void menuContainerView;
    void presentationSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recipe;
    void shadowProperties;
    void shareCardViewController;
    void topConstraint;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)appLaunchButtonTapped:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showCallDetailsButtonTapped;
- (void)statusViewTapped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
