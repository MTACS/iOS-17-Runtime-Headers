
@protocol PRSWallpaperObserverInitializing <NSObject>

@required

- (oneway void)initializeWithKnownIdentities:(NSArray<__PRSWallpaperObserverPathUpdate__> *)arg1 knownRoles:(NSArray<__PRSRoleActivePosterObserverUpdate__> *)arg2 knownCollection:(PRSPosterRoleCollectionObserverUpdate *)arg3;

@end
