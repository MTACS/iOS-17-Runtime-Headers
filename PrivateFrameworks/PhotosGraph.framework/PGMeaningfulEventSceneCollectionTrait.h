
@interface PGMeaningfulEventSceneCollectionTrait : PGMeaningfulEventCollectionTrait {
    bool  _accumulateHighConfidenceAssetCounts;
    unsigned long long  _minimumNumberOfHighConfidenceAssets;
    unsigned long long  _minimumNumberOfNegativeHighConfidenceAssets;
    double  _minimumRatioOfHighConfidenceAssets;
}

@property (nonatomic) bool accumulateHighConfidenceAssetCounts;
@property (nonatomic) unsigned long long minimumNumberOfHighConfidenceAssets;
@property (nonatomic) unsigned long long minimumNumberOfNegativeHighConfidenceAssets;
@property (nonatomic) double minimumRatioOfHighConfidenceAssets;

- (bool)accumulateHighConfidenceAssetCounts;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (id)initWithNodes:(id)arg1;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (unsigned long long)minimumNumberOfHighConfidenceAssets;
- (unsigned long long)minimumNumberOfNegativeHighConfidenceAssets;
- (double)minimumRatioOfHighConfidenceAssets;
- (void)setAccumulateHighConfidenceAssetCounts:(bool)arg1;
- (void)setMinimumNumberOfHighConfidenceAssets:(unsigned long long)arg1;
- (void)setMinimumNumberOfNegativeHighConfidenceAssets:(unsigned long long)arg1;
- (void)setMinimumRatioOfHighConfidenceAssets:(double)arg1;

@end
