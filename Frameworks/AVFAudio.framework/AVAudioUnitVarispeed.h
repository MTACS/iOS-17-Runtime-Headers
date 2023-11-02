
@interface AVAudioUnitVarispeed : AVAudioUnitTimeEffect

@property (nonatomic) float rate;

- (id)init;
- (float)rate;
- (void)setRate:(float)arg1;

@end
