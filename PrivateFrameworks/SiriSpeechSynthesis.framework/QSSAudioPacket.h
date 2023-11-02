
@interface QSSAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct AudioPacket { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *audio_bytes;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::AudioPacket> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio_bytes;
- (void)audio_bytes:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioPacket { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioPacket { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
