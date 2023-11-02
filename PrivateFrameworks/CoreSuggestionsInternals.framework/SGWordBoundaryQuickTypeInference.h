
@interface SGWordBoundaryQuickTypeInference : NSObject

+ (bool)_probablePriorPredictionInContext:(id)arg1 predictedLabel:(long long)arg2;
+ (id)quickTypeTriggerForContext:(id)arg1 localeIdentifier:(id)arg2 modelConfigPath:(id)arg3 espressoBinFilePath:(id)arg4;
+ (id)quickTypeTriggerForContext:(id)arg1 localeIdentifier:(id)arg2 modelConfigPath:(id)arg3 espressoBinFilePath:(id)arg4 useContactNames:(bool)arg5;

@end
