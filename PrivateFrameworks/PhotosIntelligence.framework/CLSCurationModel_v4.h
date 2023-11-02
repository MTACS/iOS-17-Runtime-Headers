
@interface CLSCurationModel_v4 : CLSCurationModel_v3 {
    CLSIVSNSFWModel * _ivsNSFWModel;
    CLSMemeModel * _memeModel;
    CLSTrendsSceneModel * _trendsSceneModel;
}

@property (readonly) CLSIVSNSFWModel *ivsNSFWModel;
@property (readonly) CLSMemeModel *memeModel;
@property (readonly) CLSTrendsSceneModel *trendsSceneModel;

+ (id)baseSpecificationWithSpecification:(id)arg1;

- (void).cxx_destruct;
- (bool)assetIsJunkWithSceneClassifications:(id)arg1 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg4 forMemories:(bool)arg5;
- (bool)avoidIfPossibleForKeyAssetWithAsset:(id)arg1 statistics:(struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct { unsigned int x_15_1_1; } x15; struct { unsigned int x_16_1_1; unsigned int x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; } x16; }*)arg2;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)arg1;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)arg1;
- (id)faceInformationSummaryWithFaces:(id)arg1 detectionTraitsByFaceLocalIdentifier:(id)arg2 verifiedPersonUUIDs:(id)arg3 hiddenPersonUUIDs:(id)arg4 personUUIDByMergeCandidateUUID:(id)arg5 userFeedbackCalculator:(id)arg6 assetUUID:(id)arg7;
- (id)initWithCurationModelSpecification:(id)arg1;
- (bool)isMemeExclusiveWithAsset:(id)arg1;
- (bool)isMemeWithAsset:(id)arg1;
- (bool)isSemDevSceneDetectedForIdentifier:(unsigned int)arg1 withSceneClassification:(id)arg2;
- (bool)isUtilityForMemoriesForImageAsset:(id)arg1;
- (bool)isUtilityForMemoriesWithAsset:(id)arg1 userFeedbackCalculator:(id)arg2;
- (bool)isUtilityForMemoriesWithVideoAsset:(id)arg1;
- (bool)isUtilityForSyndicationWithAsset:(id)arg1;
- (bool)isUtilityForVideoAsset:(id)arg1;
- (bool)isVeryPreciselyIVSNSFWExplicitWithAsset:(id)arg1;
- (id)ivsNSFWModel;
- (id)memeModel;
- (id)trendsSceneModel;

@end
