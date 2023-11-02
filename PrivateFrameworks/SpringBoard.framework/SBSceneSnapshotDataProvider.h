
@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {
    UIImage * _cachedImage;
    SBSnapshotDataProviderContext * _context;
    SBFallbackSnapshotDataProvider * _fallbackSnapshotDataProvider;
    bool  _hasProtectedContent;
    IOSurface * _processedSurface;
    double  _scaleFactor;
    FBSceneSnapshot * _snapshot;
}

@property (nonatomic, readonly, retain) XBSnapshotDataProviderContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)IOSurfaceForFormat:(long long)arg1;
- (void)_invalidateSnapshotData;
- (id)context;
- (id)fallbackSnapshotDataProvider;
- (id)fetchImageForFormat:(long long)arg1;
- (bool)hasProtectedContent;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;

@end
