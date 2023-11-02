
@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long nextAvailableInputBus;
@property (nonatomic) float outputVolume;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void)didAttachToEngine:(id)arg1;
- (id)init;
- (void)inputConnected:(unsigned long long)arg1;
- (unsigned long long)nextAvailableInputBus;
- (float)outputVolume;
- (void)setInputPan:(float)arg1 bus:(unsigned long long)arg2;
- (void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2;
- (void)setOutputVolume:(float)arg1;

@end
