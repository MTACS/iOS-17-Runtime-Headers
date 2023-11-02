
@interface PPMostCommonFeatureValue : NSObject <MLCustomModel> {
    NSString * _dominantItemCountFeatureValueKey;
    NSString * _dominantItemFeatureValueKey;
    NSString * _featureName;
    NSCountedSet * _itemCounts;
}

- (void).cxx_destruct;
- (id)_dominantItem;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)itemCounts;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
