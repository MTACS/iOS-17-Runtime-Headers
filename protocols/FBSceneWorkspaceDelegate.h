
@protocol FBSceneWorkspaceDelegate <NSObject>

@optional

- (void)workspace:(FBSceneWorkspace *)arg1 clientDidConnectWithHandshake:(FBSceneClientHandshake *)arg2;
- (void)workspace:(FBSceneWorkspace *)arg1 didAddScene:(FBScene *)arg2;
- (void)workspace:(FBSceneWorkspace *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)workspace:(void *)arg1 didReceiveSceneRequestWithOptions:(void *)arg2 fromProcess:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: FBSceneWorkspace *, FBSWorkspaceSceneRequestOptions *, <FBSceneClientProcess> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBScene *, NSError *, void*
- (void)workspace:(FBSceneWorkspace *)arg1 willRemoveScene:(FBScene *)arg2;

@end
