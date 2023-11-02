
@interface _UIWindowSceneGeometrySettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsGeometryMutationDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsGeometryMutationDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_updateSceneGeometryWithSettingObserverContext:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })arg1 windowScene:(id)arg2 transitionContext:(id)arg3;
- (id)sceneSettingsGeometryMutationDiffInspector;
- (void)setSceneSettingsGeometryMutationDiffInspector:(id)arg1;

@end
