
@protocol SBAppSwitcherSnapshotImageCacheDelegate <NSObject>

@required

- (FBSDisplayIdentity *)displayIdentityForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (long long)orientationForSnapshotOfAppLayout:(SBAppLayout *)arg1 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg2;
- (double)scaleForDownscaledSnapshotsForLayoutRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg3;
- (<SBApplicationSceneHandleProviding> *)sceneHandleProviderForImageCache:(SBAppSwitcherSnapshotImageCache *)arg1;
- (struct CGSize { double x1; double x2; })snapshotSizeForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 inImageCache:(SBAppSwitcherSnapshotImageCache *)arg4;

@end
