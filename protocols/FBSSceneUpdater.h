
@protocol FBSSceneUpdater <NSObject>

@required

- (FBSSerialQueue *)callOutQueue;
- (bool)canHaveAgent;
- (<FBSProcess> *)hostProcess;
- (void)scene:(FBSScene *)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneClientSettings *)arg2 withDiff:(FBSSceneClientSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(void *)arg1 sendMessage:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 9: FBSScene *, FBSSceneMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, NSError *, void*

@end
