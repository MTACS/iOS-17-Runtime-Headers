
@interface AMUIDateTimeDataLayerViewController : UIViewController <AMUIAmbientViewControlling, AMUIOpacityAdjusting> {
    long long  _chromeOrientationPolicy;
    <AMUIDateProviding> * _dateProvider;
    NSLayoutConstraint * _dateTimeLeadingEdgeConstraint;
    NSLayoutConstraint * _dateTimeLeftEdgeConstraint;
    NSLayoutConstraint * _dateTimeRightEdgeConstraint;
    NSLayoutConstraint * _dateTimeTrailingEdgeConstraint;
    AMUIDateTimeViewController * _dateTimeViewController;
    NSLayoutConstraint * _nominalSafeAreaBottomConstraint;
    UILayoutGuide * _nominalSafeAreaLayoutGuide;
    NSLayoutConstraint * _nominalSafeAreaLeftConstraint;
    NSLayoutConstraint * _nominalSafeAreaRightConstraint;
    NSLayoutConstraint * _nominalSafeAreaTopConstraint;
}

@property (nonatomic, readonly) NSDictionary *activeConfigurationMetadata;
@property (nonatomic) long long chromeOrientationPolicy;
@property (nonatomic, retain) <AMUIDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *viewForOpacityAdjustment;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_noteWindowWillRotate:(id)arg1;
- (void)_updateDateTimeConstraintsForChromeOrientation;
- (void)_updateDateTimeConstraintsForChromeOrientationWithInterfaceOrientation:(long long)arg1;
- (void)_updateNominalSafeAreaGuide;
- (id)activeConfigurationMetadata;
- (long long)chromeOrientationPolicy;
- (id)dateProvider;
- (bool)handleDismiss;
- (void)invalidate;
- (void)loadView;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)setChromeOrientationPolicy:(long long)arg1;
- (void)setDateProvider:(id)arg1;
- (bool)updatePosterConfiguration:(id)arg1 withAnimationSettings:(id)arg2;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (id)viewForOpacityAdjustment;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
