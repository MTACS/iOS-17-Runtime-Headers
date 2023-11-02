
@interface CLSCurationModel_v3 : CLSCurationModel_v1 {
    CLSNSFWModel * _nsfwModel;
    CLSPotentialLandmarkModel * _potentialLandmarkModel;
    bool  _r14j9IsAvailable;
    CLSSDModel * _sdModel;
    CLSTabooEventModel * _tabooEventModel;
}

@property (readonly) CLSNSFWModel *nsfwModel;
@property (readonly) CLSPotentialLandmarkModel *potentialLandmarkModel;
@property (readonly) CLSSDModel *sdModel;
@property (readonly) CLSTabooEventModel *tabooEventModel;

+ (id)baseSpecificationWithSpecification:(id)arg1;

- (void).cxx_destruct;
- (bool)avoidIfPossibleForKeyAssetWithAsset:(id)arg1 statistics:(struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { unsigned int x_15_1_1; } x15; struct { unsigned int x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; }*)arg2;
- (bool)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)arg1 statistics:(struct { unsigned int x1; }*)arg2;
- (bool)avoidIfPossibleForKeyAssetWithSignals:(id)arg1 statistics:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg2;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)arg1;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)arg1;
- (bool)filterForFoodieWithClassification:(id)arg1;
- (bool)hasPoorResolutionWithAsset:(id)arg1;
- (id)initWithCurationModelSpecification:(id)arg1;
- (bool)isJunkWithJunkClassification:(id)arg1;
- (bool)isShowcasingFoodWithSceneClassification:(id)arg1;
- (bool)isTragicFailureWithImageAsset:(id)arg1;
- (bool)isUtilityForMemoriesWithAsset:(id)arg1 userFeedbackCalculator:(id)arg2;
- (bool)isUtilityForMemoriesWithProcessedSignals:(id)arg1;
- (id)nsfwModel;
- (id)potentialLandmarkModel;
- (id)processedSignalsFromSignals:(id)arg1;
- (id)sdModel;
- (id)tabooEventModel;

@end
