
@protocol FBSSceneUpdaterDelegate <NSObject>

@required

- (void)updater:(id <FBSSceneUpdater>)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)updater:(void *)arg1 didReceiveMessage:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 8: <FBSSceneUpdater> *, FBSSceneMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, void*
- (void)updater:(void *)arg1 didUpdateSettings:(void *)arg2 withDiff:(void *)arg3 transitionContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <FBSSceneUpdater> *, FBSSceneSettings *, FBSSceneSettingsDiff *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceSceneUpdateResponse *, void*

@end
