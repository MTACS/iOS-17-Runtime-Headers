
@interface SGModelRules : NSObject

+ (id)_modelsAvailabeForMode:(unsigned long long)arg1 objective:(unsigned long long)arg2 language:(id)arg3;
+ (void)loadBinaryClassificationModelFromMobileAssetForObjective:(unsigned long long)arg1 language:(id)arg2 withBlock:(id /* block */)arg3;
+ (bool)shouldCollectTrainingDataForObjective:(unsigned long long)arg1 language:(id)arg2;

@end
