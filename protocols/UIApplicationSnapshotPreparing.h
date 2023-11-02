
@protocol UIApplicationSnapshotPreparing <NSObject>

@required

- (void)extendSnapshotContext:(FBSSceneSnapshotContext *)arg1 forSnapshotAction:(FBSSceneSnapshotAction *)arg2;
- (void)prepareSnapshotsWithAction:(void *)arg1 forScene:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: FBSSceneSnapshotAction *, FBSScene *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
