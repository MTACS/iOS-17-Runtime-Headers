
@protocol SBShelfLiveContentOverlayCoordinatorDelegate <NSObject>

@required

- (UIView *)shelfLiveContentOverlayCoordinator:(SBShelfLiveContentOverlayCoordinator *)arg1 liveViewForAppLayout:(SBAppLayout *)arg2;
- (NSArray *)shelfLiveContentOverlayCoordinatorAppLayouts:(SBShelfLiveContentOverlayCoordinator *)arg1;
- (SBAppSwitcherSnapshotImageCache *)shelfLiveContentOverlayCoordinatorSnapshotCache:(SBShelfLiveContentOverlayCoordinator *)arg1;

@end
