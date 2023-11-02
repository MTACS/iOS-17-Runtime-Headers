
@interface SRUIFAudioPowerLevelUpdater : NSObject <CSAudioPowerServiceClientDelegate> {
    float  _averageAudioPower;
    <SRUIFAudioPowerLevelUpdaterDelegate> * _delegate;
    CSAudioPowerServiceClient * _inputAudioPowerUpdater;
}

@property (getter=_averageAudioPower, nonatomic, readonly) float averageAudioPower;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_delegate, nonatomic, readonly) <SRUIFAudioPowerLevelUpdaterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_inputAudioPowerUpdater, nonatomic, readonly) CSAudioPowerServiceClient *inputAudioPowerUpdater;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_averageAudioPower;
- (id)_delegate;
- (id)_inputAudioPowerUpdater;
- (void)audioPowerDidUpdateWithType:(unsigned long long)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
- (float)averagePower;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)sessionStateDidChangeTo:(long long)arg1 isAttending:(bool)arg2;
- (void)startObservingUpdates;
- (void)stopObservingUpdates;

@end
