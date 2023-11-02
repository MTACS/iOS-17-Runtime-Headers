
@interface TUAudioFrequencyController : NSObject <AVCAudioPowerSpectrumMeterDelegate> {
    <TUAudioFrequencyControllerDelegate> * _delegate;
    AVCAudioPowerSpectrumMeter * _powerSpectrumMeter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TUAudioFrequencyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVCAudioPowerSpectrumMeter *powerSpectrumMeter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (float)normalizedPowerLevelForPowerSpectrum:(id)arg1;
+ (float)rawPowerLevelForPowerSpectrum:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)_avcTapTypeForTUTapType:(long long)arg1;
- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)meterServerDidDisconnect:(id)arg1;
- (id)powerSpectrumMeter;
- (id)queue;
- (void)registerCellularPowerSpectrum:(long long)arg1;
- (void)registerParticipantPowerSpectrum:(long long)arg1;
- (void)unregisterCellularPowerSpectrum:(long long)arg1;
- (void)unregisterParticipantPowerSpectrum:(long long)arg1;

@end
