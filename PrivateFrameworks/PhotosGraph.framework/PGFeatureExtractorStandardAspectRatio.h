
@interface PGFeatureExtractorStandardAspectRatio : PGAssetFeatureExtractor

- (bool)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3;
- (long long)featureLength;
- (id)featureNames;
- (id)floatVectorWithEntity:(id)arg1 error:(id*)arg2;
- (id)name;
- (float)precisionEpsilon;
- (long long)standardAspectRatioFromFloatVector:(id)arg1;

@end
