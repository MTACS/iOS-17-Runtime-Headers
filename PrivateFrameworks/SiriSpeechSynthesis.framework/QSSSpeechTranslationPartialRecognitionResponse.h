
@interface QSSSpeechTranslationPartialRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationPartialRecognitionResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) bool is_stable_result;
@property (nonatomic, readonly) NSString *recognition_text;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *source_locale;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationPartialRecognitionResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (int)confidence;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationPartialRecognitionResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationPartialRecognitionResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_stable_result;
- (id)recognition_text;
- (id)request_id;
- (int)return_code;
- (id)return_str;
- (id)source_locale;

@end
