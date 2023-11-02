
@interface FTTokenProns : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TokenProns { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *normalized_prons;
@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) NSArray *prons;
@property (nonatomic, readonly) NSArray *sanitized_sequences;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TokenProns> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)normalized_prons;
- (unsigned long long)normalized_prons_count;
- (void)normalized_prons_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)normalized_prons_objectAtIndex:(unsigned long long)arg1;
- (id)orthography;
- (id)prons;
- (unsigned long long)prons_count;
- (void)prons_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)prons_objectAtIndex:(unsigned long long)arg1;
- (id)sanitized_sequences;
- (unsigned long long)sanitized_sequences_count;
- (void)sanitized_sequences_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)sanitized_sequences_objectAtIndex:(unsigned long long)arg1;

@end
