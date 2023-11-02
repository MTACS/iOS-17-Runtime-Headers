
@interface PGFeatureExtractorAssetImportSource : PGAssetFeatureExtractor

- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)name;

@end
