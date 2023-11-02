
@protocol LBAttendingStatesServiceDelegate <NSObject>

@required

- (void)localAttendingStarted;
- (void)localAttendingStoppedUnexpectedlyWithError:(NSError *)arg1;

@optional

- (void)localAttendingStartedWithRootRequestId:(NSString *)arg1;
- (void)localAttendingWillStartWithRootRequestId:(NSString *)arg1;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(NSString *)arg3;
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(NSString *)arg3;
- (void)speechStartDetectedWithShouldDuckTTS:(bool)arg1;

@end
