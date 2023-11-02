
@interface SBDeviceApplicationAppClipOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver> {
    SBAppClipOverlayViewController * _appClipViewController;
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;
- (void)_updateOverlaySceneActivationState;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(bool)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (bool)wantsResignActiveAssertion;

@end
