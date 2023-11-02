
@interface BWAudioConverterNode : BWNode {
    struct OpaqueFigSampleBufferProcessor { } * _audioCompressionSBP;
    NSDictionary * _settings;
}

@property (nonatomic, readonly) NSDictionary *gaplessPlaybackInfo;

+ (void)initialize;

- (void)acquireHardware;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)gaplessPlaybackInfo;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)relinquishHardware;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
