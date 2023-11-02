
@protocol CKAudioMessageRecordingViewDelegate

@required

- (void)audioMessageRecordingViewDidCancel:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidPause:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidPlay:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidResume:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidSend:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidStartScrubbing:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidStop:(CKAudioMessageRecordingView *)arg1;
- (void)audioMessageRecordingViewDidStopScrubbing:(CKAudioMessageRecordingView *)arg1 atTime:(double)arg2;
- (void)audioMessageRecordingViewDidUpdateScrubbing:(CKAudioMessageRecordingView *)arg1 atTime:(double)arg2;
- (double)powerLevelForAudioMessageRecordingView:(CKAudioMessageRecordingView *)arg1;

@end
