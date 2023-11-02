
@interface PRSWallpaperObserverConfiguration : NSObject {
    PRSPosterRoleActivePosterObserver * _activePosterRoleObserver;
    PRSWallpaperLocationStateObserver * _locationStateObserver;
    PRSPosterRoleCollectionObserver * _postersCollectionRoleObserver;
    NSObject<OS_dispatch_queue> * _queue;
    PRSWallpaperSnapshotObserver * _snapshotObserver;
}

@property (nonatomic, retain) PRSPosterRoleActivePosterObserver *activePosterRoleObserver;
@property (nonatomic, retain) PRSWallpaperLocationStateObserver *locationStateObserver;
@property (nonatomic, retain) PRSPosterRoleCollectionObserver *postersCollectionRoleObserver;
@property (nonatomic, retain) PRSWallpaperSnapshotObserver *snapshotObserver;

+ (id)configurationWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)activePosterRoleObserver;
- (id)init;
- (bool)isValid;
- (id)locationStateObserver;
- (unsigned long long)locations;
- (id)postersCollectionRoleObserver;
- (void)setActivePosterRoleObserver:(id)arg1;
- (void)setLocationStateObserver:(id)arg1;
- (void)setLocations:(unsigned long long)arg1;
- (void)setPostersCollectionRoleObserver:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSnapshotObserver:(id)arg1;
- (id)snapshotObserver;

@end
