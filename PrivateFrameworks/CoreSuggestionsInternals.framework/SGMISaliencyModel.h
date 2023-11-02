
@interface SGMISaliencyModel : NSObject

+ (id)defaultModel;
+ (id)getSaliencyOutputOf:(id)arg1 forArray:(id)arg2;
+ (long long)ruleBasedInferenceFor:(id)arg1;
+ (long long)ruleBasedInferenceFor:(id)arg1 config:(id)arg2;
+ (id)saliencyForFeatureVector:(id)arg1;
+ (double)saliencyThreshold;

@end
