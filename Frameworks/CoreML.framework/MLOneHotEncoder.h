
@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling> {
    NSOrderedSet * _featureEncoding;
    bool  _handleUnknown;
    bool  _ouputSparse;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSOrderedSet *featureEncoding;
@property (nonatomic, readonly) bool handleUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) bool ouputSparse;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)featureEncoderFrom:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(bool)arg3 handleUnknown:(bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 orderedInputFeatureNames:(id)arg3;
+ (id)featureEncoderFrom:(id)arg1 inputDescription:(id)arg2 outputDescription:(id)arg3 orderedInputFeatureNames:(id)arg4 orderedOutputFeatureNames:(id)arg5;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)encodeFeatureValue:(id)arg1;
- (id)encodeFeatureValueIntString:(unsigned long long)arg1;
- (id)featureEncoding;
- (bool)handleUnknown;
- (id)initWith:(id)arg1 dataTransformerName:(id)arg2 ouputSparse:(bool)arg3 handleUnknown:(bool)arg4 inputDescription:(id)arg5 outputDescription:(id)arg6 orderedInputFeatureNames:(id)arg7 orderedOutputFeatureNames:(id)arg8 configuration:(id)arg9;
- (bool)ouputSparse;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)unknownDenseVector;

@end
