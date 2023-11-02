
@protocol SVXSystemEventMutating <NSObject>

@required

- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setDeviceSetupFlowScene:(SVXDeviceSetupFlowScene *)arg1;
- (void)setOrderedAlarmAndTimerIDs:(NSArray *)arg1;
- (void)setSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)setStoreDemo:(SVXStoreDemo *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(long long)arg1;

@end
