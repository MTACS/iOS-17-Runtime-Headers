
@protocol VCAudioPowerSpectrumMeterDelegate <NSObject>

@required

- (void)audioPowerSpectrumMeter:(VCAudioPowerSpectrumMeter *)arg1 didUpdateAudioPowerSpectrums:(NSDictionary *)arg2;

@end
