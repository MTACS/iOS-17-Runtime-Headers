
@interface PBUICachedSnapshotEffectProvider : NSObject <BSInvalidatable, PBUIPosterReplicaSnapshotProviding, PBUIPosterReplicaSourceObserver> {
    <PBUIWallpaperEffectCompositor> * _backdropCompositor;
    BSUIMappedImageCache * _cache;
    PBUIBakedEffectSnapshotSource * _currentSource;
    <PBUIWallpaperEffectCompositor> * _materialCompositor;
    PBUIReplicaSourceObserverBox * _observers;
    <PBUIPosterReplicaSnapshotProviding> * _snapshotProvider;
    <BSInvalidatable> * _snapshotSubscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)effectiveStyle;
- (id)initForSnapshotProvider:(id)arg1 cache:(id)arg2;
- (id)initForSnapshotProvider:(id)arg1 cacheIdentifier:(id)arg2;
- (void)invalidate;
- (id)registerSnapshotSourceObserver:(id)arg1;
- (void)setNeedsSourceUpdate;
- (id)snapshotSourceForObserver:(id)arg1;

@end
