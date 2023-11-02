
@protocol PRSWallpaperObserving <NSObject>

@required

- (oneway void)notifyRoleActivePosterUpdates:(NSArray<__PRSRoleActivePosterObserverUpdate__> *)arg1;
- (oneway void)notifyRolePosterCollectionUpdates:(NSArray<__PRSPosterRoleCollectionObserverUpdate__> *)arg1;
- (oneway void)notifySnapshotUpdates:(NSArray<__PRSWallpaperObserverSnapshotUpdate__> *)arg1;
- (oneway void)notifyWallpaperUpdates:(NSArray<__PRSWallpaperObserverPathUpdate__> *)arg1;

@end
