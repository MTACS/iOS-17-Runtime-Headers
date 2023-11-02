
@interface OPTTSAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AudioDescription { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned int bits_per_channel;
@property (nonatomic, readonly) unsigned int bytes_per_frame;
@property (nonatomic, readonly) unsigned int bytes_per_packet;
@property (nonatomic, readonly) unsigned int channels_per_frame;
@property (nonatomic, readonly) unsigned int format_flags;
@property (nonatomic, readonly) unsigned int format_id;
@property (nonatomic, readonly) unsigned int frames_per_packet;
@property (nonatomic, readonly) unsigned int reserved;
@property (nonatomic, readonly) double sample_rate;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::AudioDescription> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })audioStreamBasicDescription;
- (unsigned int)bits_per_channel;
- (unsigned int)bytes_per_frame;
- (unsigned int)bytes_per_packet;
- (unsigned int)channels_per_frame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (unsigned int)format_flags;
- (unsigned int)format_id;
- (unsigned int)frames_per_packet;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (unsigned int)reserved;
- (double)sample_rate;

@end
