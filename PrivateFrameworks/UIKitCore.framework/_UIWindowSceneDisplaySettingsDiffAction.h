
@interface _UIWindowSceneDisplaySettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsDisplayDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsDisplayDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)sceneSettingsDisplayDiffInspector;
- (void)setSceneSettingsDisplayDiffInspector:(id)arg1;

@end
