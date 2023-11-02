
@interface iconclassificationOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _leaf_leaf_predictions_probabilities;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *leaf_leaf_predictions_probabilities;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithLeaf_leaf_predictions_probabilities:(id)arg1;
- (id)leaf_leaf_predictions_probabilities;
- (void)setLeaf_leaf_predictions_probabilities:(id)arg1;

@end
