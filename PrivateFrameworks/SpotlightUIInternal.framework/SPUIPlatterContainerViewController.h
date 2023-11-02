
@interface SPUIPlatterContainerViewController : UIViewController <NUIContainerViewDelegate, SPUINavigationControllerDelegate, UIGestureRecognizerDelegate> {
    SPUINavigationController * _navController;
    UIView * _platterBackgroundView;
    UIGestureRecognizer * _tapGestureRecognizer;
    UIVisualEffectView * _visualEffectView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SPUINavigationController *navController;
@property (retain) UIView *platterBackgroundView;
@property (readonly) Class superclass;
@property (retain) UIGestureRecognizer *tapGestureRecognizer;
@property (retain) NUIContainerBoxView *view;
@property (retain) UIVisualEffectView *visualEffectView;

+ (bool)isHardwareKeyboardAttached;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hardwareKeyboardAvailabilityChangedAnimated:(bool)arg1;
- (id)initWithNavigationController:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMarginsForContainer;
- (id)navController;
- (void)navigationViewDidInvalidateSizeAnimated:(bool)arg1;
- (id)platterBackgroundView;
- (id)platterVisualEffectView;
- (void)setNavController:(id)arg1;
- (void)setPlatterBackgroundView:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)tapGestureRecognizer;
- (id)visualEffectView;

@end
