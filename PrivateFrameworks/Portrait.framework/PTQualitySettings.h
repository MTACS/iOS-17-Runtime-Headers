
@interface PTQualitySettings : NSObject {
    NSString * _description;
    float  _disparityGuidedFilterEpsilon;
    float  _disparityUpsampleFactor;
    bool  _doCenterDisparity;
    bool  _doFirstLevelGaussianDownsample;
    bool  _doFocusEdgeMask;
    bool  _doIntermediate2XUpscale;
    bool  _doMacroApertureLimit;
    float  _foregroundBlurLimitingFactor;
    unsigned long long  _intermediatePixelFormat;
    int  _numberOfPatternCircles;
    int  _quality;
    bool  _rayMarch;
    bool  _rayMarchAll;
    float  _renderDownscale;
    bool  _useExportQualityNoise;
}

@property float disparityGuidedFilterEpsilon;
@property float disparityUpsampleFactor;
@property bool doCenterDisparity;
@property (readonly) bool doDisparityUpsampling;
@property bool doFirstLevelGaussianDownsample;
@property bool doFocusEdgeMask;
@property bool doIntermediate2XUpscale;
@property bool doMacroApertureLimit;
@property float foregroundBlurLimitingFactor;
@property unsigned long long intermediatePixelFormat;
@property int numberOfPatternCircles;
@property int quality;
@property bool rayMarch;
@property bool rayMarchAll;
@property float renderDownscale;
@property bool useExportQualityNoise;

+ (id)createWithQuality:(int)arg1 config:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (float)disparityGuidedFilterEpsilon;
- (float)disparityUpsampleFactor;
- (bool)doCenterDisparity;
- (bool)doDisparityUpsampling;
- (bool)doFirstLevelGaussianDownsample;
- (bool)doFocusEdgeMask;
- (bool)doIntermediate2XUpscale;
- (bool)doMacroApertureLimit;
- (float)foregroundBlurLimitingFactor;
- (unsigned long long)intermediatePixelFormat;
- (int)numberOfPatternCircles;
- (int)quality;
- (bool)rayMarch;
- (bool)rayMarchAll;
- (float)renderDownscale;
- (void)setDisparityGuidedFilterEpsilon:(float)arg1;
- (void)setDisparityUpsampleFactor:(float)arg1;
- (void)setDoCenterDisparity:(bool)arg1;
- (void)setDoFirstLevelGaussianDownsample:(bool)arg1;
- (void)setDoFocusEdgeMask:(bool)arg1;
- (void)setDoIntermediate2XUpscale:(bool)arg1;
- (void)setDoMacroApertureLimit:(bool)arg1;
- (void)setForegroundBlurLimitingFactor:(float)arg1;
- (void)setIntermediatePixelFormat:(unsigned long long)arg1;
- (void)setNumberOfPatternCircles:(int)arg1;
- (void)setQuality:(int)arg1;
- (void)setRayMarch:(bool)arg1;
- (void)setRayMarchAll:(bool)arg1;
- (void)setRenderDownscale:(float)arg1;
- (void)setUseExportQualityNoise:(bool)arg1;
- (void)updateDescription;
- (bool)useExportQualityNoise;

@end
