
@protocol CKAudioRecorderDelegate <NSObject>

@required

- (void)audioRecorderDidStartRecording:(CKAudioRecorder *)arg1;
- (void)audioRecorderDidUpdateAveragePower:(float)arg1;
- (void)audioRecorderRecordingDidChange:(CKAudioRecorder *)arg1;
- (void)audioRecorderRecordingDidFail:(CKAudioRecorder *)arg1;

@end
