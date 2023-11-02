
@protocol WFAudioRecorderDelegate <NSObject>

@required

- (void)audioRecorder:(WFAudioRecorder *)arg1 didFinishWithDestinationURL:(NSURL *)arg2 error:(NSError *)arg3;

@optional

- (void)audioRecorder:(WFAudioRecorder *)arg1 didProgressToTime:(double)arg2;
- (void)audioRecorder:(WFAudioRecorder *)arg1 didStartRecording:(bool)arg2 error:(NSError *)arg3;

@end
