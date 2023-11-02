
@protocol CSContinuousVoiceTriggerDelegate <NSObject>

@required

- (void)continuousVoiceTrigger:(CSContinuousVoiceTrigger *)arg1 detectedVoiceTriggerResult:(NSDictionary *)arg2;

@optional

- (void)continuousVoiceTrigger:(CSContinuousVoiceTrigger *)arg1 detectedSilenceAfterVoiceTriggerAt:(double)arg2;

@end
