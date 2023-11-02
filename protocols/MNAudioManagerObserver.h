
@protocol MNAudioManagerObserver <NSObject>

@required

- (void)audioManager:(MNAudioManager *)arg1 didActivateAudioSession:(bool)arg2;
- (void)audioManager:(MNAudioManager *)arg1 didStartSpeakingPrompt:(NSString *)arg2;

@end
