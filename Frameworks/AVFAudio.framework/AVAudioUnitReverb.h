
@interface AVAudioUnitReverb : AVAudioUnitEffect

@property (nonatomic) float wetDryMix;

- (id)init;
- (void)loadFactoryPreset:(long long)arg1;
- (void)setWetDryMix:(float)arg1;
- (float)wetDryMix;

@end
