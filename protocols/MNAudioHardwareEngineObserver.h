
@protocol MNAudioHardwareEngineObserver <NSObject>

@required

- (void)audioHardwareEngine:(MNAudioHardwareEngine *)arg1 didActivateAudioSession:(bool)arg2;
- (void)audioHardwareEngine:(MNAudioHardwareEngine *)arg1 didStartSpeakingPrompt:(NSString *)arg2;

@end
