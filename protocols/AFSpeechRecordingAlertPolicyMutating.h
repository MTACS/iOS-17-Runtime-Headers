
@protocol AFSpeechRecordingAlertPolicyMutating <NSObject>

@required

- (void)setStartingAlertBehavior:(AFSpeechRecordingAlertBehavior *)arg1;
- (void)setStoppedAlertBehavior:(AFSpeechRecordingAlertBehavior *)arg1;
- (void)setStoppedWithErrorAlertBehavior:(AFSpeechRecordingAlertBehavior *)arg1;

@end
