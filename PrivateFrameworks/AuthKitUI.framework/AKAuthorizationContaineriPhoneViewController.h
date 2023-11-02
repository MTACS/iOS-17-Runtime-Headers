
@interface AKAuthorizationContaineriPhoneViewController : AKAuthorizationContainerViewController <UIViewControllerTransitioningDelegate> {
    UIVisualEffectView * _blurBackgroundView;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerContentSize;
    NSLayoutConstraint * _rootViewHeightConstraint;
    NSLayoutConstraint * _rootViewTopConstraint;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) UIVisualEffectView *blurBackgroundView;
@property (nonatomic) struct CGSize { double x1; double x2; } containerContentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_delegate_authorizationContainerViewControllerDidDismiss;
- (bool)_delegate_authorizationContainerViewControllerShouldDismiss;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissalFrameForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_layoutContainerView:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutFrameForContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)blurBackgroundView;
- (struct CGSize { double x1; double x2; })containerContentSize;
- (id)init;
- (id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setBlurBackgroundView:(id)arg1;
- (void)setContainerContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContainerContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
