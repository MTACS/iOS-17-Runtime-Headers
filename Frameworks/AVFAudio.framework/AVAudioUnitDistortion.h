
@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (nonatomic) float preGain;
@property (nonatomic) float wetDryMix;

- (struct AUPreset { int x1; struct __CFString {} *x2; })FillOutAUPreset:(long long)arg1;
- (id)init;
- (void)loadFactoryPreset:(long long)arg1;
- (float)preGain;
- (void)setPreGain:(float)arg1;
- (void)setWetDryMix:(float)arg1;
- (float)wetDryMix;

@end
