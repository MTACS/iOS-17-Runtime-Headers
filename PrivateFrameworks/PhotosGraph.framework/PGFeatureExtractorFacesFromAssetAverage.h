
@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor {
    MAFeatureExtractor * _faceFeatureExtractor;
    NSString * _name;
}

@property (readonly) MAFeatureExtractor *faceFeatureExtractor;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 underlyingError:(id)arg4;
- (id)faceFeatureExtractor;
- (long long)featureLength;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)floatVectorWithFaces:(id)arg1 error:(id*)arg2;
- (id)initWithFaceFeatureExtractor:(id)arg1 name:(id)arg2;
- (id)name;

@end
