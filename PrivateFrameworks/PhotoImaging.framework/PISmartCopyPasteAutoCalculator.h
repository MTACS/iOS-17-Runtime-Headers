
@interface PISmartCopyPasteAutoCalculator : NUAutoCalculator {
    PISliderNetAdjustmentsRequest * _adjustmentsRequest;
    PISliderNetLiftRequest * _liftRequest;
    double  _similarityGatingThreshold;
    IHKSliderNetCPModel * _sliderNetModel;
    NSData * _sourceAssetScenePrint;
    NSData * _targetAssetScenePrint;
    NUComposition * _targetComposition;
}

@property (nonatomic, retain) PISliderNetAdjustmentsRequest *adjustmentsRequest;
@property (nonatomic, retain) PISliderNetLiftRequest *liftRequest;
@property (nonatomic) double similarityGatingThreshold;
@property (nonatomic, copy) NSData *sourceAssetScenePrint;
@property (nonatomic, copy) NSData *targetAssetScenePrint;

+ (double)_clampedValueForValue:(double)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 fallbackMinValue:(double)arg4 fallbackMaxValue:(double)arg5;
+ (id)adjustmentsToModifyBasedOnSourceCompositionController:(id)arg1;
+ (void)applyAdjustmentDictionary:(id)arg1 toCompositionController:(id)arg2;
+ (id)descriptionForAdjustmentDictionary:(id)arg1;
+ (id)imageHarmonizationKitVersion;

- (void).cxx_destruct;
- (id)adjustedCompositionForNetwork:(id)arg1 withSourceComposition:(id)arg2;
- (id)adjustmentsDictionaryWithNetworkOutput:(id)arg1 similarity:(float)arg2;
- (id)adjustmentsRequest;
- (id)initWithComposition:(id)arg1;
- (id)initWithSourceComposition:(id)arg1 targetComposition:(id)arg2;
- (id)liftRequest;
- (void)setAdjustmentsRequest:(id)arg1;
- (void)setLiftRequest:(id)arg1;
- (void)setSimilarityGatingThreshold:(double)arg1;
- (void)setSourceAssetScenePrint:(id)arg1;
- (void)setTargetAssetScenePrint:(id)arg1;
- (double)similarityGatingThreshold;
- (id)sourceAssetScenePrint;
- (void)submit:(id /* block */)arg1;
- (id)targetAssetScenePrint;

@end
