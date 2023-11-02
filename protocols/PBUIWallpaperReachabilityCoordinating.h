
@protocol PBUIWallpaperReachabilityCoordinating <NSObject>

@required

- (void)addReachabilityObserver:(id <PBUIWallpaperReachabilityObserving>)arg1;
- (double)effectiveReachabilityYOffset;
- (bool)isWindowIgnoredForReachability:(UIWindow *)arg1;
- (void)removeReachabilityObserver:(id <PBUIWallpaperReachabilityObserving>)arg1;

@end
