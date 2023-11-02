
@interface PGFeatureExtractorAssetPhotoLibrary : PGFeatureExtractor {
    MAFeatureExtractor * _photoLibraryFeatureExtractor;
}

@property (nonatomic, readonly) MAFeatureExtractor *photoLibraryFeatureExtractor;

- (void).cxx_destruct;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)initWithPhotoLibraryFeatureExtractor:(id)arg1;
- (id)name;
- (id)photoLibraryFeatureExtractor;

@end
