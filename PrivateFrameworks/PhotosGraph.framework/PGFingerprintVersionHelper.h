
@interface PGFingerprintVersionHelper : NSObject

+ (id)_assetPrintFeatureExtractorForAssetPrintType:(long long)arg1 transformers:(id)arg2 error:(id*)arg3;
+ (id)_featureExtractor:(id)arg1 withTransformers:(id)arg2;
+ (id)_featureExtractor:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3;
+ (id)_featureExtractors:(id)arg1 withTransformers:(id)arg2;
+ (id)_featureExtractors:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3;
+ (bool)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;
+ (id)_multiModalFeatureExtractorForMutliModalType:(long long)arg1 assetFeatureExtractor:(id)arg2 personaVectorFeatureExtractor:(id)arg3 graph:(id)arg4 transformers:(id)arg5 error:(id*)arg6;
+ (id)_personaVectorFeatureExtractorForPersonaVectorType:(long long)arg1 fetchOptionPropertySet:(id)arg2 graph:(id)arg3 transformers:(id)arg4 error:(id*)arg5;
+ (id)_sceneprintFeatureExtractorInstance;
+ (id)featureExtractorForFingerprintVersion:(long long)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4;
+ (id)fetchOptionPropertySetForFingerprintVersion:(long long)arg1;
+ (long long)fingerprintVersionForName:(id)arg1;
+ (bool)isAssetFingerprintVersion:(long long)arg1;
+ (bool)isMemoryFingerprintVersion:(long long)arg1;
+ (bool)isMemoryNodeFingerprintVersion:(long long)arg1;
+ (bool)isMomentFingerprintVersion:(long long)arg1;
+ (bool)isMomentNodeFingerprintVersion:(long long)arg1;
+ (id)nameForFingerprintVersion:(long long)arg1;
+ (void)resetPreCalculatedFeatures;

@end
