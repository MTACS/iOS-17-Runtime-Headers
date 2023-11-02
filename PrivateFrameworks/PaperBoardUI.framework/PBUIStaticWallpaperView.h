
@interface PBUIStaticWallpaperView : PBUIWallpaperView {
    PBUIColorBoxes * _colorBoxes;
    UIImage * _displayedImage;
    NSData * _displayedImageHashData;
    NSString * _displayedImageHashString;
    NSURL * _displayedImageURL;
    bool  _needsInactiveAppearanceTreatment;
    double  _overallContrast;
    UIImage * _sampleImage;
}

@property (nonatomic, retain) PBUIColorBoxes *colorBoxes;
@property (getter=_displayedImage, setter=_setDisplayedImage:, nonatomic, retain) UIImage *displayedImage;
@property (nonatomic, copy) NSData *displayedImageHashData;
@property (nonatomic, copy) NSString *displayedImageHashString;
@property (getter=_displayedImageURL, setter=_setDisplayedImageURL:, nonatomic, retain) NSURL *displayedImageURL;
@property (nonatomic) bool needsInactiveAppearanceTreatment;
@property (getter=_sampleImage, setter=_setSampleImage:, nonatomic, retain) UIImage *sampleImage;

+ (bool)_allowsRasterization;
+ (bool)_canCacheImages;
+ (bool)_canDownscaleSampleImage;
+ (bool)allowsParallax;
+ (bool)isRunningInPreferencesApp;

- (void).cxx_destruct;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 smudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (id)_createColorBoxes;
- (void)_displayImage:(id)arg1;
- (id)_displayedImage;
- (id)_displayedImageURL;
- (void)_generateImageForImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 downsampleFactor:(double)arg4 needsDimmingTreatment:(bool)arg5 needsInactiveAppearanceTreatment:(bool)arg6 averageColorProvider:(id /* block */)arg7 generationHandler:(id /* block */)arg8;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)_sampleImage;
- (void)_setDisplayedImage:(id)arg1;
- (void)_setDisplayedImageURL:(id)arg1;
- (void)_setSampleImage:(id)arg1;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (void)_setupWallpaperImageFromConfiguration:(id)arg1 options:(unsigned long long)arg2;
- (void)_updateColorBoxesWithKey:(id)arg1 image:(id)arg2;
- (id)_wallpaperImageForAnalysis;
- (float)_zoomScale;
- (id)cacheUniqueIdentifier;
- (id)colorBoxes;
- (double)contrast;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (double)cropZoomScale;
- (id)displayedImageHashData;
- (id)displayedImageHashString;
- (bool)handlesInactiveAppearanceTreatment;
- (bool)hasContentOutsideVisibleBounds;
- (bool)imageRequiresLuminanceTreatment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (bool)needsInactiveAppearanceTreatment;
- (void)preheatImageData;
- (void)setColorBoxes:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setDisplayedImageHashData:(id)arg1;
- (void)setDisplayedImageHashString:(id)arg1;
- (void)setNeedsInactiveAppearanceTreatment:(bool)arg1;
- (id)snapshotImage;
- (id)snapshotImageURL;
- (id)wallpaperImage;
- (long long)wallpaperType;
- (bool)workaround_alwaysForceNoTreatment;

@end
