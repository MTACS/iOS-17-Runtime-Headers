
@interface PHASEChannelMixerDefinition : PHASEMixerDefinition {
    AVAudioChannelLayout * _inputChannelLayout;
}

@property (nonatomic, readonly) AVAudioChannelLayout *inputChannelLayout;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelLayout:(id)arg1;
- (id)initWithChannelLayout:(id)arg1 identifier:(id)arg2;
- (id)initWithChannelLayout:(id)arg1 mode:(long long)arg2;
- (id)initWithChannelLayout:(id)arg1 mode:(long long)arg2 uid:(id)arg3;
- (id)initWithChannelLayout:(id)arg1 uid:(id)arg2;
- (id)inputChannelLayout;

@end
