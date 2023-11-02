
@interface PGMeaningSceneCriteria : NSObject <PGMeaningCriteria> {
    bool  _accumulateAssetCountsWithPositiveScenes;
    unsigned long long  _minimumNumberOfAssetsWithNegativeScenes;
    unsigned long long  _minimumNumberOfAssetsWithPositiveScenes;
    unsigned long long  _minimumNumberOfNegativeScenes;
    unsigned long long  _minimumNumberOfPositiveScenes;
    double  _minimumRatioOfAssetsWithPositiveScenes;
    NSArray * _negativeScenes;
    NSArray * _positiveScenes;
}

@property (nonatomic) bool accumulateAssetCountsWithPositiveScenes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long minimumNumberOfAssetsWithNegativeScenes;
@property (nonatomic) unsigned long long minimumNumberOfAssetsWithPositiveScenes;
@property (nonatomic) unsigned long long minimumNumberOfNegativeScenes;
@property (nonatomic) unsigned long long minimumNumberOfPositiveScenes;
@property (nonatomic) double minimumRatioOfAssetsWithPositiveScenes;
@property (nonatomic, retain) NSArray *negativeScenes;
@property (nonatomic, retain) NSArray *positiveScenes;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)accumulateAssetCountsWithPositiveScenes;
- (id)description;
- (bool)isValid;
- (unsigned long long)minimumNumberOfAssetsWithNegativeScenes;
- (unsigned long long)minimumNumberOfAssetsWithPositiveScenes;
- (unsigned long long)minimumNumberOfNegativeScenes;
- (unsigned long long)minimumNumberOfPositiveScenes;
- (double)minimumRatioOfAssetsWithPositiveScenes;
- (id)negativeScenes;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (id)positiveScenes;
- (void)setAccumulateAssetCountsWithPositiveScenes:(bool)arg1;
- (void)setMinimumNumberOfAssetsWithNegativeScenes:(unsigned long long)arg1;
- (void)setMinimumNumberOfAssetsWithPositiveScenes:(unsigned long long)arg1;
- (void)setMinimumNumberOfNegativeScenes:(unsigned long long)arg1;
- (void)setMinimumNumberOfPositiveScenes:(unsigned long long)arg1;
- (void)setMinimumRatioOfAssetsWithPositiveScenes:(double)arg1;
- (void)setNegativeScenes:(id)arg1;
- (void)setPositiveScenes:(id)arg1;

@end
