
@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor

+ (id)_allAssetsOfType:(long long)arg1 withOptions:(id)arg2;
+ (bool)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)arg1;
+ (unsigned long long)preCalculatedPhotoLibrarySize;
+ (void)resetPreCalculatedPhotoLibrarySize;
+ (void)setPreCalculatedPhotoLibrarySize:(unsigned long long)arg1;

- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)name;

@end
