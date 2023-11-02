
@protocol TUAudioFrequencyControllerDelegate <NSObject>

@required

- (void)frequencyController:(TUAudioFrequencyController *)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3;

@optional

- (void)frequencyController:(TUAudioFrequencyController *)arg1 rawValueForAudioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3;

@end
