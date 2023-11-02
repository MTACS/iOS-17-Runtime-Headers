
@interface WeatherMaps.MapKitDynamicTileOverlayRenderer : _MKDynamicTileOverlayRenderer {
    void animationPosition;
    void defaultFramerate;
    void delegate;
    void dynamicOverlay;
    void fallbackBehaviourEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ioSurfaceRefCache;
    void isPlaying;
    void overlayRenderer;
    void previousVisibleTiles;
    void renderTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
    void useIOSurfaceCache;
}

@property (nonatomic, readonly) bool fallbackEnabled;

- (void).cxx_destruct;
- (bool)canDrawKey:(struct { long long x1; long long x2; long long x3; double x4; })arg1 withTile:(id)arg2;
- (void)didExitTile:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (void)drawTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 withTile:(id)arg2 inIOSurface:(struct __IOSurface { }*)arg3 withTimestamp:(double)arg4;
- (long long)estimatedCostForTile:(id)arg1;
- (id)initWithOverlay:(id)arg1;
- (id)initWithTileOverlay:(id)arg1;
- (bool)isFallbackEnabled;
- (void)onVisibleTiles:(const struct { long long x1; long long x2; long long x3; double x4; }*)arg1 count:(long long)arg2;

@end
