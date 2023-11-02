
@interface SBHUDController : NSObject <BSDescriptionProviding, PTSettingsKeyObserver, SBFZStackParticipantDelegate, UIViewControllerTransitioningDelegate, _SBHUDHostViewControllerDelegate> {
    UIWindow * _HUDWindow;
    NSCountedSet * _hudHiddenAssertions;
    _SBHUDHostViewController * _hudViewController;
    SBHUDSettings * _settings;
    <BSInvalidatable> * _stateCaptureHandle;
    SBWindowScene * _windowScene;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic, readonly) UIWindow *HUDWindow;
@property (nonatomic, readonly) bool anyHUDsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _SBHUDHostViewController *hudViewController;
@property (nonatomic, readonly) SBHUDSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWindowScene *windowScene;
@property (nonatomic, readonly) SBFZStackParticipant *zStackParticipant;

+ (id)_defaultCrossfadeAnimatorForHUDController:(id)arg1;

- (void).cxx_destruct;
- (id)HUDSessionForViewController:(id)arg1 identifier:(id)arg2;
- (id)HUDWindow;
- (void)_createHUDWindowIfNeeded;
- (void)_dismissHUD:(id)arg1 animated:(bool)arg2;
- (void)_finishedTransitionForHUD:(id)arg1 intendedState:(long long)arg2 finalState:(long long)arg3;
- (void)_hideWindowIfPossible;
- (void)_notificationFiredToDismissHUDs:(id)arg1;
- (void)_presentHUD:(id)arg1 animated:(bool)arg2;
- (void)_setupStateCapture;
- (void)_tearDown;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 withReason:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)anyHUDsVisible;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissHUDs:(bool)arg1;
- (id)hudViewController;
- (void)hudViewController:(id)arg1 didDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willPresentHUD:(id)arg2;
- (id)init;
- (id)knownHUDControllerForIdentifier:(id)arg1;
- (id)knownHUDs;
- (id)presentedHUDControllerForIdentifier:(id)arg1;
- (id)presentedHUDs;
- (id)presentingHUDs;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)windowScene;
- (void)windowSceneDidConnect:(id)arg1;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
