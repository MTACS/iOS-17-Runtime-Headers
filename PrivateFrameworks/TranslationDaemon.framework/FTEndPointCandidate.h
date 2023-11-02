
@interface FTEndPointCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct EndPointCandidate { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int end_point_likelihood;
@property (nonatomic, readonly) int processed_audio_duration_ms;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::EndPointCandidate> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)end_point_likelihood;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)processed_audio_duration_ms;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (id)speech_id;

@end
