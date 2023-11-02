
@protocol _UISceneSettingsDiffAction <NSObject>

@required

- (void)_performActionsForUIScene:(UIScene *)arg1 withUpdatedFBSScene:(FBSScene *)arg2 settingsDiff:(FBSSceneSettingsDiff *)arg3 fromSettings:(FBSSceneSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5 lifecycleActionType:(unsigned int)arg6;

@end
