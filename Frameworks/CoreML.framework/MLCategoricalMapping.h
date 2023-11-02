
@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader> {
    NSDictionary * _mapping;
    MLFeatureValue * _valueOnUnknown;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *mapping;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MLFeatureValue *valueOnUnknown;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;
- (id)mapFeature:(id)arg1 error:(id*)arg2;
- (id)mapping;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)valueOnUnknown;

@end
