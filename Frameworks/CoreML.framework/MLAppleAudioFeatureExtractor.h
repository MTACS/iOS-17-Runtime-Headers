
@interface MLAppleAudioFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    <MLCustomModel> * _featureEmbeddingModel;
    NSString * _inputFeatureName;
    NSString * _outputFeatureName;
    MLAppleAudioFeatureExtractorParameters * _parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLAppleAudioFeatureExtractorParameters *parameters;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
- (id)parameters;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
