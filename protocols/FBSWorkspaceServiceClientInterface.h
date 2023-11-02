
@protocol FBSWorkspaceServiceClientInterface

@required

- (oneway void)createSceneWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: FBSWorkspaceSceneRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)handshakeWithRemnants:(NSSet<__FBSWorkspaceSceneRemnant__> *)arg1;
- (oneway void)requestSceneWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FBSWorkspaceSceneRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneIdentity *, NSError *, void*
- (oneway void)sceneID:(FBSSceneIdentity *)arg1 didReceiveActions:(NSSet<__BSAction__> *)arg2 forExtension:(NSString *)arg3;
- (oneway void)sceneID:(void *)arg1 didUpdateClientSettingsWithDiff:(void *)arg2 transitionContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: FBSSceneIdentity *, FBSSceneClientSettingsDiff *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)sceneID:(void *)arg1 sendMessage:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 9: FBSSceneIdentity *, FBSSceneMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneMessage *, NSError *, void*
- (oneway void)workspaceID:(void *)arg1 sendActions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSSet<__BSAction__> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
