
@interface PGFeatureExtractorMomentNodeSpecialPOI : MAFeatureExtractor

- (long long)featureLength;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)name;

@end
