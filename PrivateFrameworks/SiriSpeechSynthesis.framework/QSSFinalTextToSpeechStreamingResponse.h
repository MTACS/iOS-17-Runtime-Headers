
@interface QSSFinalTextToSpeechStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct FinalTextToSpeechStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSTextToSpeechResponseDevData *dev_data;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) int total_pkt_number;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::FinalTextToSpeechStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dev_data;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalTextToSpeechStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (id)speech_id;
- (id)stream_id;
- (int)total_pkt_number;

@end
