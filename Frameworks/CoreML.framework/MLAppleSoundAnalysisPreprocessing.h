
@interface MLAppleSoundAnalysisPreprocessing : MLModel <MLModelSpecificationLoader> {
    <MLCustomModel> * _frontendProcessingModel;
    NSString * _inputFeatureName;
    NSString * _outputFeatureName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
