
@interface SBScreenSleepCoordinator : NSObject <SBScreenWakeAnimationControllerDelegate> {
    SBAlertItemsController * _alertItemsController;
    SBAlwaysOnSettings * _alwaysOnSettings;
    <SBFAuthenticationAssertionProviding> * _authenticationAssertionProvider;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    SBBacklightController * _backlightController;
    <BLSHBacklightSceneHostEnvironment> * _backlightSceneHostEnvironment;
    SBCoverSheetPresentationManager * _coverSheetPresentationManager;
    bool  _didLock;
    NSDictionary * _lastLockOptions;
    int  _lastLockSource;
    SBLockScreenManager * _lockScreenManager;
    SBScreenWakeAnimationController * _screenWakeAnimationController;
    unsigned long long  _transitionGeneration;
    SBScreenSleepTransitionWindow * _transitionWindow;
    SBWindowScene * _windowScene;
}

@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *backlightSceneHostEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_ambientPresentationController;
- (void)_performLock;
- (void)_performLockAnimated:(bool)arg1;
- (void)_setTransitionWindowVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_shouldPresentAmbientOnSleepAndLock;
- (id)backlightSceneHostEnvironment;
- (id)initWithScreenWakeAnimationController:(id)arg1 lockScreenManager:(id)arg2 backlightController:(id)arg3 coverSheetPresentationManager:(id)arg4 authenticationStatusProvider:(id)arg5 authenticationAssertionProvider:(id)arg6 alertItemsController:(id)arg7 windowScene:(id)arg8;
- (void)sleepAndLockUIFromSource:(int)arg1 completion:(id /* block */)arg2;
- (void)sleepAndLockUIFromSource:(int)arg1 lockOptions:(id)arg2 completion:(id /* block */)arg3;
- (long long)targetBacklightStateForSource:(long long)arg1 isWake:(bool)arg2;
- (void)transitionToVisualState:(id)arg1 fromVisualState:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;

@end
