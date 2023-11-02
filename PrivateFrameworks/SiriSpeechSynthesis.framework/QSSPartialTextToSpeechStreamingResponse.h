
@interface QSSPartialTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct PartialTextToSpeechStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *audio;
@property (nonatomic, readonly) int current_pkt_number;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) QSSTextToSpeechFeature *feature;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) NSArray *word_timing_info;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::PartialTextToSpeechStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio;
- (void)audio:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)current_pkt_number;
- (int)error_code;
- (id)error_str;
- (id)feature;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialTextToSpeechStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (id)speech_id;
- (id)stream_id;
- (id)word_timing_info;

@end
