
@interface PGSequentialFeatureExtractor : MAFeatureExtractor {
    MAFeatureExtractor * _featureExtractor;
    NSArray * _featureTransformers;
}

@property (nonatomic, readonly) MAFeatureExtractor *featureExtractor;
@property (nonatomic, readonly) NSArray *featureTransformers;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
- (id)_transformFloatVector:(id)arg1 error:(id*)arg2;
- (id)defaultFloatVectorWithError:(id*)arg1;
- (id)featureExtractor;
- (long long)featureLength;
- (id)featureNames;
- (id)featureTransformers;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)initWithFeatureExtractor:(id)arg1 featureTransformers:(id)arg2;
- (id)name;

@end
