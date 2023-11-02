
@interface PGFeatureExtractorPCAPrint : PGAssetFeatureExtractor

- (bool)_generateError:(id*)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4;
- (long long)featureLength;
- (id)featureNames;
- (id)featureValuesForAssets:(id)arg1 error:(id*)arg2;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)name;

@end
