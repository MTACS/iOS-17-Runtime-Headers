
@protocol AVVoiceControllerRecordDelegate <NSObject>

@optional

- (void)voiceControllerAudioCallback:(AVVoiceController *)arg1 forStream:(unsigned long long)arg2 buffer:(AVVCAudioBuffer *)arg3;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1 withContext:(NSDictionary *)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(AVVoiceController *)arg1;
- (void)voiceControllerDidFinishAlertPlayback:(AVVoiceController *)arg1 ofType:(int)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidFinishAlertPlayback:(AVVoiceController *)arg1 withSettings:(AVVCAlertInformation *)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidSetAudioSessionActive:(AVVoiceController *)arg1 isActivated:(bool)arg2;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 forStream:(unsigned long long)arg2 successfully:(bool)arg3 error:(NSError *)arg4;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
- (void)voiceControllerEncoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerEndRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerEventOccurred:(AVVoiceController *)arg1 forStream:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)voiceControllerLPCMAudioCallback:(AVVoiceController *)arg1 forStream:(unsigned long long)arg2 buffer:(AVVCAudioBuffer *)arg3;
- (void)voiceControllerLPCMRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerMediaServicesWereLost:(AVVoiceController *)arg1;
- (void)voiceControllerMediaServicesWereReset:(AVVoiceController *)arg1;
- (void)voiceControllerRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerStreamInvalidated:(AVVoiceController *)arg1 forStream:(unsigned long long)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(AVVoiceController *)arg1 willActivate:(bool)arg2;
- (void)voiceControllerWirelessSplitterRouteAvailable:(bool)arg1 devices:(NSArray *)arg2;

@end
