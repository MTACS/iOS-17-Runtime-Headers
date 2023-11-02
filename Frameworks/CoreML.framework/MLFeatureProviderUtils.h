
@interface MLFeatureProviderUtils : NSObject

+ (id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id*)arg3;
+ (bool)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double*)arg2 stride:(unsigned long long)arg3 error:(id*)arg4;
+ (long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id*)arg2;
+ (bool)canVectorizeAllFeaturesWithDescriptions:(id)arg1;
+ (bool)canVectorizeFeatureWithDescription:(id)arg1;
+ (id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2;
+ (id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2;
+ (id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id*)arg3;
+ (bool)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double*)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id*)arg6;

@end
