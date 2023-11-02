
@interface SBSUIInCallWindowSceneSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {
    SBSUIInCallSceneSettingsDiffInspector * _inCallSceneSettingsDiffInspector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_inCallSceneSettingsDiffInspector;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;

@end
