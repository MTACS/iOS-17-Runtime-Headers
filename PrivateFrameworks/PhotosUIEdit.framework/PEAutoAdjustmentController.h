
@interface PEAutoAdjustmentController : NSObject {
    bool  _busy;
    NSArray * _cachedRedEyeCorrections;
    double  _cachedSmartColorLevel;
    double  _cachedSmartToneLevel;
    bool  _cachedValuesAreValid;
    NSDictionary * _cachedWhiteBalanceSettings;
    <NUImageProperties> * _imageProperties;
    PICompositionController * _stashedPreviousManualComposition;
}

@property (getter=isBusy, setter=_setBusy:, nonatomic) bool busy;
@property (nonatomic, retain) <NUImageProperties> *imageProperties;

+ (bool)isAutoEnhanceEnabledForAsset:(id)arg1;
+ (bool)isAutoEnhanceEnabledForCompositionController:(id)arg1;

- (void).cxx_destruct;
- (void)_applyAutoValuesOnCompositionController:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(double)arg4 smartColorLevel:(double)arg5 valuesCalculator:(id)arg6;
- (void)_enableAutoEnhanceOnCompositionController:(id)arg1 valuesCalculator:(id)arg2 useCompositionIntensity:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_revertAutoValuesOnCompositionController:(id)arg1;
- (void)_setBusy:(bool)arg1;
- (void)calculateStatisticsForCompositionController:(id)arg1 valuesCalculator:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)defaultAutoEnhanceIntensityForCompositionController:(id)arg1;
- (void)disableAutoEnhanceOnCompositionController:(id)arg1;
- (void)enableAutoEnhanceOnCompositionController:(id)arg1 useCompositionIntensity:(bool)arg2 valuesCalculator:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)enableAutoEnhanceOnCompositionController:(id)arg1 valuesCalculator:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)ensureCacheUpToDateForValuesCalculator:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)imageProperties;
- (void)invalidateCachedAdjustments;
- (bool)isBusy;
- (void)setImageProperties:(id)arg1;

@end
