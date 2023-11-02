
@interface FTLmScorerResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LmScorerResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) double ppl;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LmScorerResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (double)ppl;
- (int)return_code;
- (id)return_str;
- (id)tokens;
- (unsigned long long)tokens_count;
- (void)tokens_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)tokens_objectAtIndex:(unsigned long long)arg1;

@end
