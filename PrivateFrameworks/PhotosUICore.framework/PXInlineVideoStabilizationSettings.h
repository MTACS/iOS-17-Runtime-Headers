
@interface PXInlineVideoStabilizationSettings : PXSettings {
    double  _allowedCropFraction;
    bool  _crossfadeEnabled;
    bool  _gyroStabilizationEnabled;
    bool  _localCacheForMediaAnalysisRecipes;
    bool  _pixelStabilizationEnabled;
    bool  _showDiagnosticUI;
    bool  _timeRangeEnabled;
    bool  _useMediaAnalysisRecipe;
}

@property (nonatomic, readonly) unsigned long long allowedAnalysisTypes;
@property (nonatomic) double allowedCropFraction;
@property (nonatomic) bool crossfadeEnabled;
@property (nonatomic) bool gyroStabilizationEnabled;
@property (nonatomic) bool localCacheForMediaAnalysisRecipes;
@property (nonatomic) bool pixelStabilizationEnabled;
@property (nonatomic) bool showDiagnosticUI;
@property (nonatomic) bool timeRangeEnabled;
@property (nonatomic) bool useMediaAnalysisRecipe;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
+ (id)transientProperties;

- (unsigned long long)allowedAnalysisTypes;
- (double)allowedCropFraction;
- (bool)crossfadeEnabled;
- (bool)gyroStabilizationEnabled;
- (bool)localCacheForMediaAnalysisRecipes;
- (id)parentSettings;
- (bool)pixelStabilizationEnabled;
- (void)setAllowedCropFraction:(double)arg1;
- (void)setCrossfadeEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setGyroStabilizationEnabled:(bool)arg1;
- (void)setLocalCacheForMediaAnalysisRecipes:(bool)arg1;
- (void)setPixelStabilizationEnabled:(bool)arg1;
- (void)setShowDiagnosticUI:(bool)arg1;
- (void)setTimeRangeEnabled:(bool)arg1;
- (void)setUseMediaAnalysisRecipe:(bool)arg1;
- (bool)showDiagnosticUI;
- (bool)timeRangeEnabled;
- (bool)useMediaAnalysisRecipe;

@end
