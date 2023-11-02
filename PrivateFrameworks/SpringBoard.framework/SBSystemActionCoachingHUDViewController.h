
@interface SBSystemActionCoachingHUDViewController : SBOrientationTransformWrapperViewController <SBHUDViewControlling, UIViewControllerTransitioningDelegate> {
    SBSystemAction * _action;
    SBApplicationController * _applicationController;
    UIView * _coachingButton;
    UILabel * _coachingLabel;
    long long  _coachingLabelOrientation;
    bool  _coachingLabelTextNeedsUpdate;
    UIView * _coachingLabelWrapperView;
    UIView * _contentView;
    <SBSystemActionCoachingHUDViewControllerDelegate> * _delegate;
    UIView * _dimmingView;
    SBDoNotDisturbStateMonitor * _doNotDisturbStateMonitor;
    SBFlashlightActivityManager * _flashlightActivityManager;
    BLSAssertion * _liveRenderingAssertion;
    SBRingerControl * _ringerControl;
    bool  _rotating;
    SBSystemActionCoachingSettings * _settings;
    long long  _state;
    unsigned long long  _stateTransitionAnimationCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *physicalButtonSceneTargets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)arg1;
- (id)physicalButtonSceneTargets;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
