
@protocol SBFSceneWorkspaceControlling <NSObject>

@required

- (void)activateSceneForProcessIdentity:(void *)arg1 withOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: RBSProcessIdentity *, UISceneRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBScene *, NSError *, void*
- (void)destroyScenesWithPersistentIdentifiers:(void *)arg1 processIdentity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, RBSProcessIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)enumerateScenesWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBScene *, bool*, void*
- (FBScene *)sceneFromIdentityToken:(FBSSceneIdentityToken *)arg1;
- (FBScene *)sceneFromIdentityTokenStringRepresentation:(NSString *)arg1;
- (<SBFSceneWorkspaceControlling> *)sceneWorkspaceControllerForProcessIdentity:(RBSProcessIdentity *)arg1;

@end
