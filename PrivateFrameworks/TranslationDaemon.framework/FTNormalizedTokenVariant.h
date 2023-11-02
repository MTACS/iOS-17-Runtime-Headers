
@interface FTNormalizedTokenVariant : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct NormalizedTokenVariant { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *normalized_tokens;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::NormalizedTokenVariant> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedTokenVariant { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedTokenVariant { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)normalized_tokens;
- (unsigned long long)normalized_tokens_count;
- (void)normalized_tokens_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)normalized_tokens_objectAtIndex:(unsigned long long)arg1;

@end
