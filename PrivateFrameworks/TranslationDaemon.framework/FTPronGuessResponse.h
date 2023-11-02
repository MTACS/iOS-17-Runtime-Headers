
@interface FTPronGuessResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
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
@property (nonatomic, readonly) FTVocToken *voc_token;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::PronGuessResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)apg_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)flatbuffData;
- (id)human_readable_prons;
- (unsigned long long)human_readable_prons_count;
- (void)human_readable_prons_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)human_readable_prons_objectAtIndex:(unsigned long long)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)session_id;
- (id)speech_id;
- (id)tts_pronunciations;
- (unsigned long long)tts_pronunciations_count;
- (void)tts_pronunciations_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)tts_pronunciations_objectAtIndex:(unsigned long long)arg1;
- (id)voc_token;

@end
