
@interface AVMutableAudioMix : AVAudioMix {
    AVMutableAudioMixInternal * _mutableAudioMix;
}

@property (nonatomic, copy) NSArray *inputParameters;

+ (id)audioMix;

- (id)inputParameters;
- (void)setInputParameters:(id)arg1;

@end
