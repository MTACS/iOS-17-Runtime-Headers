
@interface ATXWidgetPredictionTrainingDatasetBuilder : NSObject {
    NSDictionary * _distinctScoreCounts;
}

- (void).cxx_destruct;
- (id)createMLArrayBatchProviderFromTrainingArray:(id)arg1;
- (id)featureDictionaryWithWidgetEngagementRecord:(id)arg1;
- (id)initWithDistinctScoreCounts:(id)arg1;
- (id)mlFeatureKeyMapping;
- (id)mlFeatureValueForFeatureName:(id)arg1 withWidgetEngagementRecord:(id)arg2 withFeatureMapping:(id)arg3;
- (void)populateAdditionalFeaturesWithMultiArray:(id)arg1 forWidgetEngagementRecord:(id)arg2;
- (id)propertyNameForInputFeatureName:(id)arg1;

@end
