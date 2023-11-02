
@protocol AVCAudioPowerSpectrumMeterDelegate <NSObject>

@optional

- (void)audioPowerSpectrumMeter:(AVCAudioPowerSpectrumMeter *)arg1 didUpdateAudioPowerSpectrums:(NSDictionary *)arg2;
- (void)audioPowerSpectrumMeter:(AVCAudioPowerSpectrumMeter *)arg1 didUpdateLocalAudioPowerSpectrum:(AVCAudioPowerSpectrum *)arg2 remoteAudioPowerSpectrums:(NSDictionary *)arg3;
- (void)meterServerDidDisconnect:(AVCAudioPowerSpectrumMeter *)arg1;
- (void)meterSpectrumCaptureWasInterrupted:(AVCAudioPowerSpectrumMeter *)arg1;

@end
