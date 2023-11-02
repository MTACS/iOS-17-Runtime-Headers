
@interface _REMLWeightedModel : NSObject <REAutomaticExportedInterface> {
    REFeature * _biasFeature;
    REInteractionDescriptor * _descriptor;
}

@property (nonatomic, readonly) REFeature *selectionFeature;
@property (nonatomic, readonly) float weight;

+ (id)weightedModelWithDescriptor:(id)arg1 featureSet:(id)arg2;

- (void).cxx_destruct;
- (float)_biasForFeatureSet:(id)arg1;
- (void)_configureMode:(id)arg1;
- (bool)_loadModel:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (void)enumerateModels:(id /* block */)arg1;
- (id)initWithBiasFeature:(id)arg1;
- (bool)loadModelFromURL:(id)arg1 error:(id*)arg2;
- (id)predictWithFeatures:(id)arg1;
- (bool)saveModelToURL:(id)arg1 error:(id*)arg2;
- (id)selectionFeature;
- (void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2;
- (float)weight;

@end
