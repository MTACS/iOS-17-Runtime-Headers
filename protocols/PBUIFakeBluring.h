
@protocol PBUIFakeBluring <PBUIWallpaperPositioning>

@required

- (long long)effectiveStyle;
- (<PBUIFakeBlurObserver> *)observer;
- (void)offsetWallpaperBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)requestStyle:(long long)arg1;
- (void)setObserver:(id <PBUIFakeBlurObserver>)arg1;
- (void)setTransformOptions:(unsigned long long)arg1;
- (void)setZoomScale:(double)arg1;
- (unsigned long long)transformOptions;
- (double)zoomScale;

@end
