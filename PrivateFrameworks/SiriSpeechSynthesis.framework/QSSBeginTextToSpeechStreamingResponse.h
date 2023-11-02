
@interface QSSBeginTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BeginTextToSpeechStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) QSSAudioDescription *decoder_description;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) QSSTextToSpeechMeta *meta_info;
@property (nonatomic, readonly) QSSAudioDescription *playback_description;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) float streaming_playback_buffer_size_in_seconds;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (long long)audio_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoder_description;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)meta_info;
- (id)playback_description;
- (id)session_id;
- (id)speech_id;
- (id)stream_id;
- (float)streaming_playback_buffer_size_in_seconds;

@end
