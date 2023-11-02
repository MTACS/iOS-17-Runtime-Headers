
@interface PHASEAmbientMixerDefinition : PHASEMixerDefinition {
    AVAudioChannelLayout * _inputChannelLayout;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _orientation;
}

@property (nonatomic, readonly) AVAudioChannelLayout *inputChannelLayout;
@property (nonatomic, readonly) struct { } orientation;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithChannelLayout:(id)arg1 orientation:(struct { })arg2;
- (id)initWithChannelLayout:(id)arg1 orientation:(struct { })arg2 identifier:(id)arg3;
- (id)initWithChannelLayout:(id)arg1 orientation:(struct { })arg2 uid:(id)arg3;
- (id)inputChannelLayout;
- (struct { })orientation;

@end
