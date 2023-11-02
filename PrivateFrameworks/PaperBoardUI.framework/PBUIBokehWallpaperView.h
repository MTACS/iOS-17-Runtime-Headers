
@interface PBUIBokehWallpaperView : PBUIWallpaperView {
    bool  _blursNeedInvalidation;
    UIImage * _cachedSnapshotImage;
    NSMutableArray * _circleArray;
    long long  _circleFillColor;
    bool  _contentIsVisible;
    CADisplayLink * _displayLink;
    bool  _hasSingleVariant;
    bool  _isOnLockScreen;
    NSDictionary * _options;
    struct __IOSurface { } * _snapshotBuffer;
}

@property (nonatomic, readonly) CAGradientLayer *layer;

+ (bool)allowsParallax;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_addBokehCircles:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_computeAverageColor;
- (void)_correctGyroValues:(inout double*)arg1 y:(inout double*)arg2;
- (struct __IOSurface { }*)_createSnapshotBuffer;
- (void)_destroyDisplayLink;
- (id)_generateImageFromImage:(id)arg1 forBackdropParameters:(struct { long long x1; long long x2; long long x3; double x4; double x5; double x6; double x7; long long x8; })arg2 includeTint:(bool)arg3 traitCollection:(id)arg4;
- (void)_handleVariantChange;
- (void)_initDisplayLink;
- (bool)_layerIsOutOfBounds:(id)arg1;
- (bool)_lowPowerModeIsEnabled;
- (bool)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;
- (void)_screenDidUpdate:(id)arg1;
- (void)_screenDimmed:(id)arg1;
- (void)_screenUndimmed:(id)arg1;
- (void)_styleModeChanged:(id)arg1;
- (void)_thermalStateDidChange:(id)arg1;
- (bool)_thermalStateIsCritical;
- (void)_toggleCircleAnimations:(bool)arg1;
- (void)_updateGradientAndFillColor;
- (void)_updateOrientationIfNeeded;
- (void)_updateVariantStatus;
- (void)_wallpaperDidChange:(id)arg1;
- (id)cacheGroup;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (void)invalidate;
- (bool)isContentStatic;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)layer;
- (void)setWallpaperAnimationEnabled:(bool)arg1;
- (id)snapshotImage;
- (long long)userInterfaceStyle;
- (long long)wallpaperType;

@end
