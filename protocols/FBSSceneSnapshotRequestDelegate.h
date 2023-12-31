
@protocol FBSSceneSnapshotRequestDelegate <NSObject>

@required

- (bool)snapshotRequest:(FBSSceneSnapshotRequest *)arg1 performWithContext:(FBSSceneSnapshotContext *)arg2;
- (bool)snapshotRequestAllowSnapshot:(FBSSceneSnapshotRequest *)arg1;

@end
