
@interface QSSTokenProns : NSObject <FLTBFBufferAccessor, NSCopying> {
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
- (id)orthography;
- (id)prons;
- (id)sanitized_sequences;

@end
