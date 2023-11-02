
@interface PRReplayKitDataRecorder : PRDataRecorder

- (void)discardRecording;
- (id)init;
- (void)saveScreenRecordingToURL:(id)arg1;
- (void)start;
- (void)stopAndDiscard;
- (id)stopAndSave;
- (id)writeToURL;

@end
