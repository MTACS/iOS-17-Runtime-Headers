
@protocol SBAppSwitcherReusableSnapshotViewDelegate <NSObject>

@required

- (FBSDisplayIdentity *)displayIdentityForSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForItemWithRole:(long long)arg1 inAppLayout:(SBAppLayout *)arg2 interfaceOrientation:(long long)arg3 forSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg4;
- (<SBApplicationSceneHandleProviding> *)sceneHandleProviderForSnapshotView:(SBAppSwitcherReusableSnapshotView *)arg1;
- (bool)snapshotView:(SBAppSwitcherReusableSnapshotView *)arg1 isInsetForHomeAffordanceForAppLayout:(SBAppLayout *)arg2;
- (bool)snapshotView:(SBAppSwitcherReusableSnapshotView *)arg1 shouldShowAppClipOverlayForLayout:(SBAppLayout *)arg2;

@end
