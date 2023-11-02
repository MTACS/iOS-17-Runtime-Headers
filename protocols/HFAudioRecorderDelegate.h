
@protocol HFAudioRecorderDelegate <NSObject>

@optional

- (void)audioRecorderDidStartRecording:(HFAudioRecorder *)arg1;
- (void)audioRecorderFailedToFinishRecording:(HFAudioRecorder *)arg1;
- (void)audioRecorderFailedToStartRecording:(NSError *)arg1;
- (void)audioRecorderFinishedRecording:(HFAudioRecorder *)arg1 audioFile:(NSURL *)arg2;
- (void)didUpdateAveragePower:(float)arg1;

@end
