
@interface MKTileOverlay : NSObject <MKOverlay, _MKOverlayTileDataSource> {
    NSString * _URLTemplate;
    bool  _canReplaceMapContent;
    bool  _geometryFlipped;
    long long  _maximumZ;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    GEOTileCache * _minimumLifetimeTileCache;
    NSObject<OS_dispatch_source> * _minimumLifetimeTileCacheEvictionTimer;
    geo_isolater * _minimumLifetimeTileCacheEvictionTimerIsolation;
    long long  _minimumZ;
    bool  _needsAdditionalMinimumLifetimeCleanup;
    unsigned int  _providerID;
    GEOTileCache * _tileCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
}

@property (readonly) NSString *URLTemplate;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic) bool canReplaceMapContent;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeometryFlipped) bool geometryFlipped;
@property (readonly) unsigned long long hash;
@property long long maximumZ;
@property long long minimumZ;
@property (getter=_providerID, nonatomic, readonly) unsigned int providerID;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property struct CGSize { double x1; double x2; } tileSize;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)URLForTilePath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (id)URLTemplate;
- (void)_assignProviderID;
- (void)_cancelLoadingTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (void)_flushCaches;
- (struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })_keyForPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (void)_loadTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 result:(id /* block */)arg2;
- (void)_minLifetimeCacheCleanupFired;
- (unsigned int)_providerID;
- (void)_receivedMemoryNotification;
- (void)_scheduleMinLifetimeCacheCleanupIfNecessary;
- (id)_tilesInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentScale:(double)arg3;
- (int)_zoomLevelForScale:(double)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (bool)canReplaceMapContent;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)init;
- (id)initWithURLTemplate:(id)arg1;
- (bool)isGeometryFlipped;
- (void)loadTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 result:(id /* block */)arg2;
- (long long)maximumZ;
- (long long)minimumZ;
- (void)setCanReplaceMapContent:(bool)arg1;
- (void)setGeometryFlipped:(bool)arg1;
- (void)setMaximumZ:(long long)arg1;
- (void)setMinimumZ:(long long)arg1;
- (void)setTileSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tileSize;

@end
