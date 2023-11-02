
@interface MLClassConfidenceThresholding : MLModel <MLModelSpecificationLoader> {
    MLFeatureProviderConformer * _inputFeatureConformer;
    MLParameterContainer * _parameterContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLFeatureProviderConformer *inputFeatureConformer;
@property (nonatomic, retain) MLParameterContainer *parameterContainer;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2 precisionRecallCurves:(id)arg3 error:(id*)arg4;
- (id)inputFeatureConformer;
- (id)parameterContainer;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setParameterContainer:(id)arg1;

@end
