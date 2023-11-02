
@interface AVAudioUnitTimeEffect : AVAudioUnit

@property (nonatomic) bool bypass;

- (bool)bypass;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setBypass:(bool)arg1;

@end
