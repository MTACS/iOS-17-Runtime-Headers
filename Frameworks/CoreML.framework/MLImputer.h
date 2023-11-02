
@interface MLImputer : MLModel <MLModelSpecificationLoader> {
    MLFeatureValue * _imputeValue;
    MLFeatureValue * _replaceValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLFeatureValue *imputeValue;
@property (nonatomic, readonly) MLFeatureValue *replaceValue;
@property (readonly) Class superclass;

+ (id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 error:(id*)arg8;
+ (id)imputeValueFrom:(id)arg1 replaceValue:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6 error:(id*)arg7;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)imputeValue;
- (id)initWith:(id)arg1 imputeValue:(id)arg2 replaceValue:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8 error:(id*)arg9;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)replaceValue;

@end
