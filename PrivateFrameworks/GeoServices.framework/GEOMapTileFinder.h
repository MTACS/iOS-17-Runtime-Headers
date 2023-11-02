
@interface GEOMapTileFinder : GEOMapRequest {
    struct { 
        double latitude; 
        double longitude; 
    }  _center;
    bool  _isCanceling;
    double  _radius;
    id /* block */  _tileHandler;
    int  _tileScale;
    int  _tileSize;
    int  _tileStyle;
    unsigned long long  _zoomLevel;
}

@property (nonatomic, readonly) GEOMapAccess *map;
@property (nonatomic, copy) id /* block */ tileHandler;
@property (nonatomic, readonly) int tileScale;
@property (nonatomic, readonly) int tileSize;
@property (nonatomic, readonly) int tileStyle;
@property (nonatomic, readonly) unsigned long long zoomLevel;

+ (id)buildingsTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
+ (id)detailedTransitTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
+ (id)realisticTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
+ (id)transitGeometryTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;

- (void).cxx_destruct;
- (struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })_adjacentTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 dirX:(int)arg2 dirY:(int)arg3;
- (void)_fetchDataForKeys:(const void*)arg1;
- (id)_initWithMap:(id)arg1 zoomLevel:(unsigned long long)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(struct { double x1; double x2; })arg6 radius:(double)arg7;
- (void)cancel;
- (void)dealloc;
- (void)findTiles:(id /* block */)arg1;
- (void)findTiles:(id /* block */)arg1 excludingKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2;
- (void)findTilesAdjacentToTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 containingPoint:(const void*)arg2 tileHandler:(id /* block */)arg3;
- (id)map;
- (void)setTileHandler:(id /* block */)arg1;
- (id /* block */)tileHandler;
- (int)tileScale;
- (int)tileSize;
- (int)tileStyle;
- (unsigned long long)zoomLevel;

@end
