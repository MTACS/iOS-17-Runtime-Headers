
@protocol OFAudioRecorderDelegate

@required

- (void)recorder:(OFAudioRecorder *)arg1 recordingDidFinishToOutputFileURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)recorderRecordingDidBegin:(OFAudioRecorder *)arg1;

@end
