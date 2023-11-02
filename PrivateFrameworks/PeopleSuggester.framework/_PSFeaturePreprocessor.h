
@interface _PSFeaturePreprocessor : NSObject

+ (id)extractFeatureValuesFromFeatureObjects:(id)arg1;
+ (id)featureNameToOneHotEncodedFeatureNameGivenFeatureName:(id)arg1 featureValue:(id)arg2;
+ (id)getEnumBasedSuffix:(id)arg1 featureValue:(id)arg2;
+ (id)getNumberFromVirtualFeatureValue:(id)arg1;
+ (id)getStringBasedSuffix:(id)arg1 featureValue:(id)arg2;
+ (id)oneHotEncodedDictionaryWithCandidateToFeatureVectorDict:(id)arg1;
+ (id)rawDataToCandidateFeatureDict:(id)arg1;

@end
