
@interface PGFeatureExtractorPhotoLibraryAverage : PGFeatureExtractor {
    MAFeatureExtractor * _assetFeatureExtractor;
    NSArray * _assetFetchOptionPropertySet;
    NSArray * _featureNames;
}

@property (nonatomic, readonly) MAFeatureExtractor *assetFeatureExtractor;
@property (nonatomic, readonly) NSArray *assetFetchOptionPropertySet;
@property (nonatomic, readonly) NSArray *featureNames;

+ (bool)preCalculateFeatureVectorWithPhotoLibrary:(id)arg1 assetFeatureExtractor:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id*)arg4;
+ (id)preCalculatedFloatVector;
+ (void)resetPreCalculatedFeatureVector;
+ (void)setPreCalculatedFloatVector:(id)arg1;

- (void).cxx_destruct;
- (id)assetFeatureExtractor;
- (id)assetFetchOptionPropertySet;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)initWithAssetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2;
- (id)name;

@end
