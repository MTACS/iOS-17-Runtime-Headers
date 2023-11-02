
@interface _UIWindowSceneUserInterfaceStyleSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsUserInterfaceStyleDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsUserInterfaceStyleDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateUserInterfaceStyleChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(id /* block */)arg3;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)sceneSettingsUserInterfaceStyleDiffInspector;
- (void)setSceneSettingsUserInterfaceStyleDiffInspector:(id)arg1;

@end
