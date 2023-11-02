
@protocol CSAudioPowerServiceClientDelegate <NSObject>

@required

- (void)audioPowerDidUpdateWithType:(unsigned long long)arg1 averagePower:(float)arg2 peakPower:(float)arg3;

@end
