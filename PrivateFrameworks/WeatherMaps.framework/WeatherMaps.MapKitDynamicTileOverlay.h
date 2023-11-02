
@interface WeatherMaps.MapKitDynamicTileOverlay : _MKDynamicTileOverlay {
    void blendMode;
    void colorMap;
    void fetchesTiles;
    void lock;
    void opacity;
    void overlayDescriptor;
    void overlayRenderer;
    void purpose;
    void requiresPixelData;
    void tasks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeConfiguration;
}

- (void).cxx_destruct;
- (void)cancelLoadingTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1;
- (id)init;
- (void)loadTileAtPath:(struct { long long x1; long long x2; long long x3; double x4; })arg1 result:(id /* block */)arg2;

@end
