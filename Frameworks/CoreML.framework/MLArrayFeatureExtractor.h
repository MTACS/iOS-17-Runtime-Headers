
@interface MLArrayFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    NSString * _arrayColumnName;
    NSArray * _extractIndices;
    long long  _outputType;
}

@property (nonatomic, readonly) NSString *arrayColumnName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *extractIndices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long outputType;
@property (readonly) Class superclass;

+ (id)extractArrayElement:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7;
+ (id)extractArrayElement:(id)arg1 indices:(id)arg2 inputDescription:(id)arg3 outputDescription:(id)arg4 orderedInputFeatureNames:(id)arg5 orderedOutputFeatureNames:(id)arg6;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)arrayColumnName;
- (id)extractIndices;
- (id)initWith:(id)arg1 indices:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;
- (long long)outputType;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
