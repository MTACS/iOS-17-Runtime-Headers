
@interface PBUIMaterialCompositor : NSObject <PBUIWallpaperEffectCompositor> {
    double  _downsampleFactor;
    <PBUIRenderer> * _renderer;
}

@property (nonatomic) double downsampleFactor;
@property (nonatomic, retain) <PBUIRenderer> *renderer;

- (void).cxx_destruct;
- (id)applyEffect:(id)arg1 toImage:(id)arg2;
- (double)downsampleFactor;
- (id)init;
- (id)renderer;
- (void)setDownsampleFactor:(double)arg1;
- (void)setRenderer:(id)arg1;

@end
