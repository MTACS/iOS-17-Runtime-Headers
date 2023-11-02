
@interface PGFeatureExtractorAssetCollectionAverage : PGAssetCollectionFeatureExtractor {
    MAFeatureExtractor * _assetFeatureExtractor;
    NSArray * _assetFetchOptionPropertySet;
    NSString * _name;
}

@property (nonatomic, readonly) MAFeatureExtractor *assetFeatureExtractor;
@property (nonatomic, readonly) NSArray *assetFetchOptionPropertySet;

- (void).cxx_destruct;
- (bool)_generateError:(id*)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
- (id)assetFeatureExtractor;
- (id)assetFetchOptionPropertySet;
- (long long)featureLength;
- (id)featureNames;
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)initWithAssetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2 name:(id)arg3;
- (id)name;

@end
