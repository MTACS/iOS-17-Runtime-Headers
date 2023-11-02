
@interface PGFeatureExtractorFaceEyesState : PGFaceFeatureExtractor

- (id)_floatVectorForFaceEyesState:(unsigned short)arg1;
- (id)defaultFloatVectorWithError:(id*)arg1;
- (long long)featureLength;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)name;

@end
