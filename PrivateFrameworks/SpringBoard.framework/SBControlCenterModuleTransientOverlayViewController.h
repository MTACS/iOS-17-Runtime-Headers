
@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate> {
    <SBControlCenterModuleTransientOverlayViewControllerDelegate> * _delegate;
    CCUIModuleAlertViewController * _moduleOverlayViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBControlCenterModuleTransientOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CCSModulePresentationOptions *presentationOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateTransitionFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 isAnimated:(bool)arg4 otherAnimations:(id /* block */)arg5 completion:(id /* block */)arg6;
- (bool)_canShowWhileLocked;
- (void)_dismiss;
- (bool)_shouldBlurBackground;
- (void)contentModuleAlertViewControllerNeedsDismissal:(id)arg1;
- (id)delegate;
- (void)handleGestureDismissal;
- (bool)handleHomeButtonPress;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (bool)prefersEmbeddedDisplayPresentation;
- (id)presentationOptions;
- (void)setDelegate:(id)arg1;
- (bool)shouldDisableControlCenter;
- (bool)shouldDisableOrientationUpdates;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
