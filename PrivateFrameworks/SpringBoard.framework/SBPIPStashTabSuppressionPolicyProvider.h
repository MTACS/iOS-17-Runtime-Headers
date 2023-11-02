
@interface SBPIPStashTabSuppressionPolicyProvider : NSObject <SBBannerManagerTransitionObserver, SBDeviceApplicationSceneHandleObserver, SBLayoutStateTransitionObserver, SBUIActiveOrientationObserver, UIGestureRecognizerDelegate> {
    SBBannerManager * _bannerManager;
    UIApplicationSceneClientSettingsDiffInspector * _clientSettingsInspector;
    bool  _invalidated;
    <SBPIPStashTabSuppressionPolicyProviderObserver> * _observer;
    SBWindowScenePIPManager * _pipManager;
    NSTimer * _reevaluatePolicyTimer;
    NSMutableSet * _requestIdentifiersForPresentedExpanseBanners;
    SBDeviceApplicationSceneHandle * _sceneHandleToObserve;
    SBSceneManager * _sceneManager;
    bool  _stashTabCanBeHidden;
    SBSwitcherController * _switcherController;
}

@property (nonatomic, readonly) SBBannerManager *bannerManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBPIPStashTabSuppressionPolicyProviderObserver> *observer;
@property (nonatomic, readonly) SBWindowScenePIPManager *pipManager;
@property (nonatomic, retain) NSTimer *reevaluatePolicyTimer;
@property (nonatomic) SBDeviceApplicationSceneHandle *sceneHandleToObserve;
@property (nonatomic, readonly) SBSceneManager *sceneManager;
@property (nonatomic) bool stashTabCanBeHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBSwitcherController *switcherController;

- (void).cxx_destruct;
- (void)_reevaluatePolicy;
- (void)_resetReevaluatePolicyTimer;
- (void)_startTrackingPresentable:(id)arg1;
- (void)_stopTrackingPresentable:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_updateSceneHandleToObserveForLayoutState:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)bannerManager;
- (void)bannerManager:(id)arg1 willDismissPresentable:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)bannerManager:(id)arg1 willPresentPresentable:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 bannerManager:(id)arg2 sceneManager:(id)arg3 pipManager:(id)arg4;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)observer;
- (id)pipManager;
- (id)reevaluatePolicyTimer;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (id)sceneHandleToObserve;
- (id)sceneManager;
- (void)setObserver:(id)arg1;
- (void)setReevaluatePolicyTimer:(id)arg1;
- (void)setSceneHandleToObserve:(id)arg1;
- (void)setStashTabCanBeHidden:(bool)arg1;
- (bool)stashTabCanBeHidden;
- (id)switcherController;

@end
