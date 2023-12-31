
@interface _EARNnetUtil : NSObject

+ (id)doBackPropWithNnetModelFile:(id)arg1 inputFeatureVector:(id)arg2 inputTargetVector:(id)arg3 inputLearningRate:(float)arg4 inputFreezeComponents:(id)arg5 inputNumLocalIterations:(int)arg6 inputGradNormFactor:(float)arg7 inputGradNormType:(id)arg8 inputBatchSize:(float)arg9 inputObjectiveFunction:(id)arg10 outTrainingLoss:(float*)arg11 outModelLayersUpdated:(id*)arg12;
+ (id)doBackPropWithNnetModelFile:(id)arg1 inputFeatureVector:(id)arg2 inputTargetVector:(id)arg3 inputLearningRate:(float)arg4 inputFreezeComponents:(id)arg5 inputNumLocalIterations:(int)arg6 inputGradNormFactor:(float)arg7 inputGradNormType:(id)arg8 inputBatchSize:(float)arg9 inputObjectiveFunction:(id)arg10 outTrainingLosses:(id*)arg11 outModelLayersUpdated:(id*)arg12;
+ (void)initialize;

@end
