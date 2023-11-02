
@protocol CSAudioMeterProviding <NSObject>

@required

- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (void)updateMeters;

@end
