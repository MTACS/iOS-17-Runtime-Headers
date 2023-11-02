
@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (nonatomic) double delayTime;
@property (nonatomic) float feedback;
@property (nonatomic) float lowPassCutoff;
@property (nonatomic) float wetDryMix;

- (double)delayTime;
- (float)feedback;
- (id)init;
- (float)lowPassCutoff;
- (void)setDelayTime:(double)arg1;
- (void)setFeedback:(float)arg1;
- (void)setLowPassCutoff:(float)arg1;
- (void)setWetDryMix:(float)arg1;
- (float)wetDryMix;

@end
