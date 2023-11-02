
@interface PGFeatureExtractorFaceQuality : PGFaceFeatureExtractor

- (id)defaultFloatVectorWithError:(id*)arg1;
- (long long)featureLength;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)name;

@end
