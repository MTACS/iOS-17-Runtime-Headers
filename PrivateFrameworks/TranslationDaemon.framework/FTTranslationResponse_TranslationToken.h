
@interface FTTranslationResponse_TranslationToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationToken { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool add_space_after;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) FTAlignment *mt_alignment;
@property (nonatomic, readonly) NSString *token;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationToken> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (bool)add_space_after;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationToken { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationToken { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)mt_alignment;
- (id)token;

@end
