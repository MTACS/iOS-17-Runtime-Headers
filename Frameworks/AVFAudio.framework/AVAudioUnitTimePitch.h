
@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (nonatomic) float overlap;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;

- (id)init;
- (float)overlap;
- (float)pitch;
- (float)rate;
- (void)setOverlap:(float)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;

@end
