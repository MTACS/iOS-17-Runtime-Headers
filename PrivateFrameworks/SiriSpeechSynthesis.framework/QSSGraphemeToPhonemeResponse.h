
@interface QSSGraphemeToPhonemeResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct GraphemeToPhonemeResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *aot_token_prons;
@property (nonatomic, readonly) NSString *g2p_model_version;
@property (nonatomic, readonly) NSString *g2p_version;
@property (nonatomic, readonly) bool is_pron_guessed;
@property (nonatomic, readonly) NSArray *jit_token_prons;
@property (nonatomic, readonly) NSArray *phonemes;
@property (nonatomic, readonly) NSString *phoneset_version;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::GraphemeToPhonemeResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)aot_token_prons;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)g2p_model_version;
- (id)g2p_version;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)is_pron_guessed;
- (id)jit_token_prons;
- (id)phonemes;
- (id)phoneset_version;
- (int)return_code;
- (id)return_str;
- (id)session_id;

@end
