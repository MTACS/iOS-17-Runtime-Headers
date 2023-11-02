
@protocol SVXClientAudioPowerServicing <NSObject>

@required

- (float)averagePower;
- (void)beginUpdateWithFrequency:(long long)arg1;
- (<SVXClientAudioPowerServiceDelegate> *)delegate;
- (void)endUpdate;
- (float)peakPower;
- (void)setDelegate:(id <SVXClientAudioPowerServiceDelegate>)arg1;

@end
