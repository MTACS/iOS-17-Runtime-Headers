
@interface _UIBacklightUISceneEnvironmentDiffAction : NSObject <BLSBacklightFBSSceneEnvironmentDiffActionDelegate, _UISceneSettingsDiffAction> {
    BLSBacklightFBSSceneEnvironmentDiffAction * _fbsSceneEnvironmentDiffAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)init;
- (void)performChangesWithTransitionContext:(id)arg1 environmentDelta:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; })arg2 performActionsBlock:(id /* block */)arg3;

@end
