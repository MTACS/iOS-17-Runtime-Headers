
@interface QSSPronGuessResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct PronGuessResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *apg_id;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) NSArray *human_readable_prons;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSArray *tts_pronunciations;
@property (nonatomic, readonly) QSSVocToken *voc_token;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::PronGuessResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)apg_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)human_readable_prons;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (id)speech_id;
- (id)tts_pronunciations;
- (id)voc_token;

@end
