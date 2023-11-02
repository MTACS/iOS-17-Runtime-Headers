
@interface _UIWindowSceneDeviceOrientationSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsDeviceOrientationDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneSettingsDiffInspector *sceneSettingsDeviceOrientationDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_updateDeviceOrientationWithSettingObserverContext:(struct { unsigned int x1 : 1; })arg1 windowScene:(id)arg2 transitionContext:(id)arg3;
- (id)sceneSettingsDeviceOrientationDiffInspector;

@end
