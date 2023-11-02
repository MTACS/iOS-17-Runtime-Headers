
@interface QSSLmScorerToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LmScorerToken { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) double log10_score;
@property (nonatomic, readonly) int ngram_used;
@property (nonatomic, readonly) NSString *token_str;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LmScorerToken> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerToken { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerToken { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (double)log10_score;
- (int)ngram_used;
- (id)token_str;

@end
