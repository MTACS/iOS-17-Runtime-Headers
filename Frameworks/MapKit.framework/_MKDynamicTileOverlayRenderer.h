
@interface _MKDynamicTileOverlayRenderer : MKOverlayRenderer {
    VKCustomTileOverlayProviderData * _customDataProvider;
    unsigned long long  _desiredDisplayRate;
}

@property (nonatomic, readonly) unsigned char anisotropy;
@property (nonatomic) unsigned long long desiredDisplayRate;
@property (getter=isFallbackEnabled, nonatomic, readonly) bool fallbackEnabled;
@property (nonatomic, readonly) bool useMetalTexture;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; long long x3; double x4; })_keyToTilePath:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (bool)_mayExtendOutsideBounds;
- (unsigned char)anisotropy;
- (unsigned char)anisotropy:(id)arg1;
- (bool)areOverlayResourcesRequired:(id)arg1;
- (bool)canDrawKey:(struct { long long x1; long long x2; long long x3; double x4; })arg1 withTile:(id)arg2;
- (id)customTileProviderForOverlay:(id)arg1;
- (unsigned long long)desiredDisplayRate;
- (void)didEnterTile:(struct { long long x1; long long x2; long long x3; double x4; })arg1 withFallback:(bool)arg2;
- (void)didExitTile:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (void)drawTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 withTile:(id)arg2 inIOSurface:(struct __IOSurface { }*)arg3 withTimestamp:(double)arg4;
- (void)drawTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 withTile:(id)arg2 inTexture:(id)arg3 withTimestamp:(double)arg4 withTileScale:(float)arg5;
- (unsigned long long)estimatedCostForTile:(id)arg1;
- (id)initWithOverlay:(id)arg1;
- (id)initWithTileOverlay:(id)arg1;
- (bool)isFallbackEnabled;
- (void)onVisibleTiles:(const struct { long long x1; long long x2; long long x3; double x4; }*)arg1 count:(unsigned long long)arg2;
- (bool)overlay:(id)arg1 canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2 withData:(id)arg3;
- (void)overlay:(id)arg1 didEnterKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2 withFallback:(bool)arg3;
- (void)overlay:(id)arg1 didExitKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
- (void)overlay:(id)arg1 drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2 withData:(id)arg3 inIOSurface:(struct __IOSurface { }*)arg4 withTimestamp:(double)arg5;
- (void)overlay:(id)arg1 drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2 withData:(id)arg3 inTexture:(id)arg4 withTimestamp:(double)arg5 withTileScale:(float)arg6;
- (unsigned long long)overlay:(id)arg1 estimatedCostForCustomTileData:(id)arg2;
- (void)overlay:(id)arg1 onVisibleTiles:(id)arg2;
- (bool)overlayCanProvideCustomTileData:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setDesiredDisplayRate:(unsigned long long)arg1;
- (bool)shouldUseMetalTexture:(id)arg1;
- (bool)useMetalTexture;

@end
