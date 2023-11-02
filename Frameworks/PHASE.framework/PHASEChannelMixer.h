
@interface PHASEChannelMixer : PHASEMixer {
    AVAudioChannelLayout * _inputChannelLayout;
}

@property (nonatomic, readonly) AVAudioChannelLayout *inputChannelLayout;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1 inputChannelLayout:(id)arg2;
- (id)inputChannelLayout;

@end
