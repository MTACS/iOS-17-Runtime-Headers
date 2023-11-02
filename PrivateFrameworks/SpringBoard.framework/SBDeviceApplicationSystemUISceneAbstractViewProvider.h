
@interface SBDeviceApplicationSystemUISceneAbstractViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver, SBScenePresenting> {
    long long  _displayMode;
    bool  _isActive;
    UIViewController * _systemSceneUIViewController;
    <BSInvalidatable> * _systemUIScenePresenterAssertion;
    <SBScenePresentingDelegate> * _systemUIScenePresentingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireSystemUIScenePresentingAssertionIfNecessary;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (void)_invalidateSystemUIScenePresentingAssertion;
- (bool)_isUnderUILock;
- (id)_realOverlayViewController;
- (id)acquireSystemUIScenePresentingAssertion;
- (bool)affectsStatusBarPresentation;
- (void)dealloc;
- (id)description;
- (id)dismissScene:(id)arg1;
- (bool)isVisibleOnScreen;
- (void)noteDisplayModeChange:(long long)arg1;
- (id)parentSceneIdentityToken;
- (id)presentScene:(id)arg1 viewControllerBuilderBlock:(id /* block */)arg2;
- (void)setPresentingDelegate:(id)arg1;
- (bool)wantsResignActiveAssertion;

@end
