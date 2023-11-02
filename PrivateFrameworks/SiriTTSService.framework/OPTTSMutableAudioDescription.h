
@interface OPTTSMutableAudioDescription : OPTTSAudioDescription

@property (nonatomic) unsigned int bits_per_channel;
@property (nonatomic) unsigned int bytes_per_frame;
@property (nonatomic) unsigned int bytes_per_packet;
@property (nonatomic) unsigned int channels_per_frame;
@property (nonatomic) unsigned int format_flags;
@property (nonatomic) unsigned int format_id;
@property (nonatomic) unsigned int frames_per_packet;
@property (nonatomic) unsigned int reserved;
@property (nonatomic) double sample_rate;

- (unsigned int)bits_per_channel;
- (unsigned int)bytes_per_frame;
- (unsigned int)bytes_per_packet;
- (unsigned int)channels_per_frame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)format_flags;
- (unsigned int)format_id;
- (unsigned int)frames_per_packet;
- (id)init;
- (unsigned int)reserved;
- (double)sample_rate;
- (void)setBits_per_channel:(unsigned int)arg1;
- (void)setBytes_per_frame:(unsigned int)arg1;
- (void)setBytes_per_packet:(unsigned int)arg1;
- (void)setChannels_per_frame:(unsigned int)arg1;
- (void)setFormat_flags:(unsigned int)arg1;
- (void)setFormat_id:(unsigned int)arg1;
- (void)setFrames_per_packet:(unsigned int)arg1;
- (void)setReserved:(unsigned int)arg1;
- (void)setSample_rate:(double)arg1;

@end
