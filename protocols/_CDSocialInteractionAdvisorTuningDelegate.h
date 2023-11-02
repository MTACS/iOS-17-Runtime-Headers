
@protocol _CDSocialInteractionAdvisorTuningDelegate <NSObject>

@required

- (void)modelTuner:(_CDPModelTuning *)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
- (void)modelTunerWillResume:(_CDPModelTuning *)arg1;
- (void)modelTunerWillStop:(_CDPModelTuning *)arg1;

@end
