
@interface _UIWindowSceneAccessibilityContrastSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    UIApplicationSceneSettingsDiffInspector * _sceneSettingsAccessibilityContrastDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIApplicationSceneSettingsDiffInspector *sceneSettingsAccessibilityContrastDiffInspector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateAccessibilityContrastChangeInScene:(id)arg1 transitionContext:(id)arg2 applyChangesBlock:(id /* block */)arg3;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)sceneSettingsAccessibilityContrastDiffInspector;
- (void)setSceneSettingsAccessibilityContrastDiffInspector:(id)arg1;

@end
