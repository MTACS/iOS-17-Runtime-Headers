
@interface FTResetServerEndpointer : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ResetServerEndpointer { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long speech_packet_count;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ResetServerEndpointer> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ResetServerEndpointer { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)speech_packet_count;

@end
