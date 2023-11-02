
@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride> {
    UIApplicationSceneClientSettingsDiffInspector * _appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector * _appSceneSettingsDiffInspector;
    bool  _hasAttemptedInCallSceneClientSettingsDiffInspectorCreation;
    SBSUIInCallSceneClientSettingsDiffInspector * _inCallSceneClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle * _sceneHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_anyObserverWants:(SEL)arg1;
- (long long)_defaultStatusBarStyle;
- (long long)_fallbackInterfaceOrientation;
- (void)_handleStatusBarBackgroundActivitiesToSuppressUpdate;
- (id)_initWithSceneHandle:(id)arg1;
- (void)_performUpdateWith:(id)arg1 actions:(id /* block */)arg2;
- (double)_statusBarAlpha;
- (bool)_statusBarAppearsOutsideOfAJailedApp;
- (bool)_statusBarAppearsOutsideOfAJailedAppCanChange;
- (bool)_statusBarAppearsOutsideOfAJailedAppInOrientation:(long long)arg1;
- (bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(bool)arg2;
- (bool)_suppressInheritedPartStyles;
- (id)backgroundActivitiesToSuppress;
- (id)breadcrumbProvider;
- (id)classicApplicationSceneHandleIfExists;
- (void)dealloc;
- (void)invalidate;
- (void)invalidateStatusBarSettings;
- (id)overlayStatusBarData;
- (void)sceneHandle:(id)arg1 didChangeBackgroundActivitiesToSuppress:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (id)sceneToHandleStatusBarTapIfExists;
- (bool)sceneWantsDeviceOrientationEventsEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (id)statusBarSceneIdentifier;

@end
