
@interface FTPartialSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct PartialSpeechRecognitionResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int audio_duration_ms;
@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) bool is_stable_result;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *recognition_text;
@property (nonatomic, readonly) NSString *request_locale;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::PartialSpeechRecognitionResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (int)audio_duration_ms;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialSpeechRecognitionResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PartialSpeechRecognitionResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_stable_result;
- (id)language;
- (id)recognition_text;
- (id)request_locale;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (id)speech_id;

@end
