
@interface SBWallpaperPreviewSnapshotCache : NSObject <PBUIWallpaperObserver, SBIconIndexNodeObserver> {
    SBIconController * _iconController;
    BSUIMappedImageCache * _imageCache;
    long long  _invalidatedLocations;
    SBIconModel * _model;
    SBWallpaperController * _wallpaperController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cacheKeyForVariant:(long long)arg1 options:(unsigned long long)arg2;
+ (id)cacheKeyForVariant:(long long)arg1 options:(unsigned long long)arg2 scalingWidth:(double)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_backlightFadeFinished;
- (id)_homeScreenSnapshotProviderWithOptions:(unsigned long long)arg1 wallpaperImage:(id)arg2;
- (void)_iconControllerDidChangeIconModel:(id)arg1;
- (id)_lockScreenSnapshotProviderWithOptions:(unsigned long long)arg1 wallpaperImage:(id)arg2;
- (void)_modelDidLayout;
- (void)_modelWillLayout;
- (long long)_orientationForOptions:(unsigned long long)arg1;
- (void)_switchToIconModel:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithImageCache:(id)arg1 iconController:(id)arg2 wallpaperController:(id)arg3;
- (void)invalidateSnapshotsForLocations:(long long)arg1;
- (id)mappedWallpaperPreviewForKey:(id)arg1;
- (id)mappedWallpaperPreviewForScaledSnapshot:(id)arg1 variant:(long long)arg2 cacheKey:(id)arg3;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)regenerateSnapshotsForLocations:(long long)arg1;
- (id)snapshotProviderForVariant:(long long)arg1 options:(unsigned long long)arg2 wallpaperImage:(id)arg3;
- (void)wallpaperDidChangeForVariant:(long long)arg1;

@end
