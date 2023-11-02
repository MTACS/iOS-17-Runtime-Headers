
@interface LCFFeatureImportance : NSObject

+ (id)_generateFeatureDictionaryForFeatureStore:(id)arg1 featureNames:(id)arg2 labelName:(id)arg3;
+ (id)analyzeFeatureImportanceWithFeatureStore:(id)arg1 featureNames:(id)arg2 labelName:(id)arg3;
+ (id)analyzeFeatureQuality:(id)arg1 featureNames:(id)arg2 labelName:(id)arg3;
+ (id)computeCorrelationBetweenVector:(id)arg1 andOtherVector:(id)arg2;

@end
