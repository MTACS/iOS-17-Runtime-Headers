
@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (nonatomic, readonly) NSArray *bands;
@property (nonatomic) float globalGain;

- (id)bands;
- (float)globalGain;
- (id)init;
- (id)initWithNumberOfBands:(unsigned long long)arg1;
- (void)setGlobalGain:(float)arg1;

@end
