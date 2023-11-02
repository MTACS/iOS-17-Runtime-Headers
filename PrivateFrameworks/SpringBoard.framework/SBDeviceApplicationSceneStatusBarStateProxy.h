
@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base <BSInvalidatable, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride> {
    SBDeviceApplicationSceneHandle * _deviceApplicationSceneHandle;
    SBDeviceApplicationSceneStatusBarStateProvider * _stateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_anyObserverWants:(SEL)arg1;
- (long long)_defaultStatusBarStyle;
- (long long)_fallbackInterfaceOrientation;
- (double)_statusBarAlpha;
- (bool)_statusBarAppearsOutsideOfAJailedApp;
- (bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(bool)arg2;
- (bool)_suppressInheritedPartStyles;
- (id)backgroundActivitiesToSuppress;
- (id)breadcrumbProvider;
- (id)classicApplicationSceneHandleIfExists;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1;
- (id)initWithDeviceApplicationSceneHandle:(id)arg1;
- (void)invalidate;
- (void)invalidateStatusBarSettings;
- (id)overlayStatusBarData;
- (id)sceneToHandleStatusBarTapIfExists;
- (bool)sceneWantsDeviceOrientationEventsEnabled;
- (void)sceneWithIdentifier:(id)arg1 didChangeBackgroundActivitiesToSuppressTo:(id)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (id)statusBarSceneIdentifier;

@end
