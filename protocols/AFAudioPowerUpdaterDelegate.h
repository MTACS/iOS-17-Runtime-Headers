
@protocol AFAudioPowerUpdaterDelegate <NSObject>

@required

- (void)audioPowerUpdaterDidUpdate:(AFAudioPowerUpdater *)arg1 averagePower:(float)arg2 peakPower:(float)arg3;

@end
