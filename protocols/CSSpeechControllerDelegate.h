
@protocol CSSpeechControllerDelegate <NSObject>

@optional

- (void)speechController:(CSSpeechController *)arg1 didSetAudioSessionActive:(bool)arg2;
- (void)speechController:(CSSpeechController *)arg1 willSetAudioSessionActive:(bool)arg2;
- (void)speechControllerBeginRecordInterruption:(CSSpeechController *)arg1;
- (void)speechControllerBeginRecordInterruption:(CSSpeechController *)arg1 withContext:(NSDictionary *)arg2;
- (void)speechControllerDidDeliverLastBuffer:(CSSpeechController *)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;
- (void)speechControllerDidDetectEndpoint:(CSSpeechController *)arg1 ofType:(long long)arg2 atTime:(double)arg3;
- (void)speechControllerDidDetectStartpoint:(CSSpeechController *)arg1;
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(CSSpeechController *)arg1 atTime:(double)arg2;
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(CSSpeechController *)arg1 atTime:(double)arg2 wantsAudibleFeedback:(bool)arg3;
- (void)speechControllerDidFinishAlertPlayback:(CSSpeechController *)arg1 ofType:(long long)arg2 error:(NSError *)arg3;
- (void)speechControllerDidStartRecording:(CSSpeechController *)arg1 audioDeviceInfo:(CSAudioDeviceInfo *)arg2 successfully:(bool)arg3 error:(NSError *)arg4;
- (void)speechControllerDidStartRecording:(CSSpeechController *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)speechControllerDidStopRecording:(CSSpeechController *)arg1 audioDeviceInfo:(CSAudioDeviceInfo *)arg2 forReason:(long long)arg3 estimatedSpeechEndHostTime:(unsigned long long)arg4;
- (void)speechControllerDidStopRecording:(CSSpeechController *)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;
- (void)speechControllerDidUpdateSmartSiriVolume:(CSSpeechController *)arg1 forReason:(unsigned long long)arg2;
- (void)speechControllerEndRecordInterruption:(CSSpeechController *)arg1;
- (void)speechControllerLPCMRecordBufferAvailable:(CSSpeechController *)arg1 buffer:(NSData *)arg2;
- (void)speechControllerLPCMRecordBufferAvailable:(CSSpeechController *)arg1 buffer:(NSData *)arg2 recordedAt:(unsigned long long)arg3;
- (void)speechControllerRecordBufferAvailable:(CSSpeechController *)arg1 buffers:(NSArray *)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4;
- (void)speechControllerRecordBufferAvailable:(CSSpeechController *)arg1 buffers:(NSArray *)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4 audioDeviceInfo:(CSAudioDeviceInfo *)arg5;
- (void)speechControllerRecordHardwareConfigurationDidChange:(CSSpeechController *)arg1 toConfiguration:(long long)arg2;
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2;
- (void)speechControllerRequestsOperation:(void *)arg1 forReason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
