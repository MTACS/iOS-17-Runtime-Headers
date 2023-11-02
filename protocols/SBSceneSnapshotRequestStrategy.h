
@protocol SBSceneSnapshotRequestStrategy <NSObject>

@required

- (NSArray *)snapshotRequestsForSceneHandle:(SBApplicationSceneHandle *)arg1 settings:(FBSSceneSettings *)arg2 snapshotRequestContext:(SBSceneSnapshotRequestContext *)arg3;

@end
