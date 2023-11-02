
@protocol FBWorkspaceEventDispatcherTarget <NSObject>

@required

- (void)didReceiveHandshake:(FBSceneClientHandshake *)arg1;
- (void)didReceiveSceneRequest:(FBWorkspaceSceneRequest *)arg1 fromHandle:(RBSProcessHandle *)arg2;
- (NSString *)workspaceIdentifier;

@end
