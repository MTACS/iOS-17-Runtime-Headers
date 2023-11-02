
@interface VCAudioUnitSpatialContext : NSObject {
    unsigned int  _audioSessionId;
    unsigned int  _maxChannelCountMic;
    unsigned int  _maxChannelCountSpeaker;
    struct OpaqueCMBlockBuffer { } * _spatialMetadata;
}

@property (nonatomic) unsigned int audioSessionId;
@property (nonatomic) unsigned int maxChannelCountMic;
@property (nonatomic) unsigned int maxChannelCountSpeaker;
@property (nonatomic) struct OpaqueCMBlockBuffer { }*spatialMetadata;

- (unsigned int)audioSessionId;
- (void)dealloc;
- (id)initWithAudioSessionId:(unsigned int)arg1 maxChannelCountMic:(unsigned int)arg2 maxChannelCountSpeaker:(unsigned int)arg3 spatialMetadata:(struct OpaqueCMBlockBuffer { }*)arg4;
- (unsigned int)maxChannelCountMic;
- (unsigned int)maxChannelCountSpeaker;
- (void)setAudioSessionId:(unsigned int)arg1;
- (void)setMaxChannelCountMic:(unsigned int)arg1;
- (void)setMaxChannelCountSpeaker:(unsigned int)arg1;
- (void)setSpatialMetadata:(struct OpaqueCMBlockBuffer { }*)arg1;
- (struct OpaqueCMBlockBuffer { }*)spatialMetadata;

@end
