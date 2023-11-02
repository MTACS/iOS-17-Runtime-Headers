
@protocol FBSceneObserver <NSObject>

@optional

- (void)scene:(FBScene *)arg1 clientDidConnect:(FBSceneClientHandle *)arg2;
- (void)scene:(FBScene *)arg1 didApplyUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)scene:(FBScene *)arg1 didCompleteUpdateWithContext:(FBSceneUpdateContext *)arg2 error:(NSError *)arg3;
- (void)scene:(FBScene *)arg1 didPrepareUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (NSSet *)scene:(FBScene *)arg1 handleActions:(NSSet *)arg2;
- (void)sceneContentStateDidChange:(FBScene *)arg1;
- (void)sceneDidActivate:(FBScene *)arg1;
- (void)sceneDidInvalidate:(FBScene *)arg1;
- (void)sceneWillDeactivate:(FBScene *)arg1 withError:(NSError *)arg2;

@end
