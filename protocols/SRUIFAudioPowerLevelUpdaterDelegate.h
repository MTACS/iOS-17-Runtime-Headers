
@protocol SRUIFAudioPowerLevelUpdaterDelegate <NSObject>

@required

- (void)audioPowerUpdaterDidUpdate:(SRUIFAudioPowerLevelUpdater *)arg1 averagePower:(float)arg2 peakPower:(float)arg3;

@end
