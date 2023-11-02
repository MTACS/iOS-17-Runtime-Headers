
@interface LCFChangepointDetection : NSObject

+ (id)_generateFeatureDictionaryForFeatureStore:(id)arg1 featureNames:(id)arg2 labelName:(id)arg3 timestampName:(id)arg4;
+ (id)analyzeChangePointInEvents:(id)arg1 withTestParameters:(id)arg2 lastRunDate:(id)arg3;
+ (id)convertFeatureStoreToEvents:(id)arg1 featureNames:(id)arg2 labelName:(id)arg3 valueName:(id)arg4 timestampName:(id)arg5;

@end
