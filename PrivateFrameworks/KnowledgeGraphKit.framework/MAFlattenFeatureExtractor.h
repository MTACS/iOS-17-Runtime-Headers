
@interface MAFlattenFeatureExtractor : MAFeatureExtractor {
    NSArray * _featureExtractors;
    NSArray * _featureNames;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *featureExtractors;

- (void).cxx_destruct;
- (id)defaultFloatVectorWithError:(id*)arg1;
- (id)featureExtractors;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 featureExtractors:(id)arg2;
- (id)name;

@end
