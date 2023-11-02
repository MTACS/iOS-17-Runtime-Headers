
@interface QSSSpeechTranslationMtResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationMtResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) bool is_final;
@property (nonatomic, readonly) NSArray *n_best_translated_phrases;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) QSSTranslationLocalePair *translation_locale_pair;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationMtResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationMtResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_final;
- (id)n_best_translated_phrases;
- (id)request_id;
- (int)return_code;
- (id)return_str;
- (id)translation_locale_pair;

@end
