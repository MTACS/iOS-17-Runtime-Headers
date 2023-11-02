
@protocol FBSceneManagerDelegate <FBSceneManagerObserver>

@optional

- (void)sceneManager:(FBSceneManager *)arg1 clientDidConnectWithHandshake:(FBSceneClientHandshake *)arg2;
- (FBSSceneTransitionContext *)sceneManager:(FBSceneManager *)arg1 createDefaultTransitionContextForScene:(FBScene *)arg2;
- (void)sceneManager:(void *)arg1 didReceiveSceneRequestWithOptions:(void *)arg2 fromProcess:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: FBSceneManager *, FBSWorkspaceSceneRequestOptions *, <FBSceneClientProcess> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBScene *, NSError *, void*
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didReceiveActions:(NSSet *)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg3 oldClientSettings:(FBSSceneClientSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;

@end
