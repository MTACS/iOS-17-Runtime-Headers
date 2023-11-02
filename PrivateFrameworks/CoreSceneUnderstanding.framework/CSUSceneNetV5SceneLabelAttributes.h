
@interface CSUSceneNetV5SceneLabelAttributes : CSULabelAttributes {
    void * _node;
    CSUMetricOperatingPointCurve * _operatingPointsForMaximalFScoreAtBetas;
    CSUMetricOperatingPointCurve * _operatingPointsForPrecisions;
    CSUMetricOperatingPointCurve * _operatingPointsForRecalls;
    CSUSceneNetV5SceneTaxonomy * _parentTaxonomy;
}

@property (nonatomic, readonly) CSUMetricOperatingPointCurve *betaFScoreMaximizingOperatingPointCurve;
@property (nonatomic, readonly, copy) NSString *humanReadableLabel;
@property (nonatomic, readonly, copy) NSArray *humanReadableSynonyms;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) bool isSearchable;
@property (nonatomic, readonly, copy) NSArray *objectDetectorLabels;
@property (nonatomic, readonly) float photosSearchThreshold;
@property (nonatomic, readonly) CSUMetricOperatingPointCurve *precisionOperatingPointCurve;
@property (nonatomic, readonly) CSUMetricOperatingPointCurve *recallOperatingPointCurve;

- (void).cxx_destruct;
- (id)betaFScoreMaximizingOperatingPointCurve;
- (id)humanReadableLabel;
- (id)humanReadableSynonyms;
- (long long)identifier;
- (id)initWithSceneNetSceneCategoryAttributes:(void*)arg1 withParentTaxonomy:(id)arg2;
- (bool)isSearchable;
- (id)objectDetectorLabels;
- (float)photosSearchThreshold;
- (id)precisionOperatingPointCurve;
- (id)recallOperatingPointCurve;

@end
