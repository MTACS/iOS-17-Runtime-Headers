
@protocol GEOResourceManifestTileGroupObserver <NSObject>

@optional

- (void)resourceManifestManager:(GEOResourceManifestManager *)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 fromOldTileGroup:(GEOActiveTileGroup *)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(GEOResourceManifestManager *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(GEOResourceManifestManager *)arg1;

@end
