
@protocol SBSceneHandleObserver <NSObject>

@optional

- (void)sceneHandle:(SBSceneHandle *)arg1 didCreateScene:(FBScene *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(NSSet *)arg2;
- (void)sceneHandle:(SBSceneHandle *)arg1 didUpdateSettingsWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneHandle:(SBSceneHandle *)arg1 replacedWithSceneHandle:(SBSceneHandle *)arg2;

@end
