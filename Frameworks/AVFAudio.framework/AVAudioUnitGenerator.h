
@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

@property (nonatomic) bool bypass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (bool)bypass;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setBypass:(bool)arg1;

@end
