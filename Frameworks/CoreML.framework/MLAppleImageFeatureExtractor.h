
@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    int  _extractorType;
    NSString * _inputFeatureName;
    long long  _outputDataType;
    NSArray * _outputFeatureName;
    MLAppleImageFeatureExtractorParameters * _parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLAppleImageFeatureExtractorParameters *parameters;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)computeScenePrintFeatures:(struct __CVBuffer { }*)arg1 handle:(id)arg2 useCPUOnly:(bool)arg3 error:(id*)arg4;
- (id)featureValueFromObjectPrint:(id)arg1 key:(id)arg2 shape:(id)arg3;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned long long)arg2;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 featureExtractorType:(int)arg3 configuration:(id)arg4 error:(id*)arg5;
- (id)parameters;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
