
@protocol VCAudioIODelegate <VCBasebandCodecNotifications, VCServerDelegate>

@required

- (void)didResumeAudioIO:(VCAudioIO *)arg1;
- (void)didSuspendAudioIO:(VCAudioIO *)arg1;

@end
