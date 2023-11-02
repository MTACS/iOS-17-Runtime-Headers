
@interface FTVocToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct VocToken { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *blob;
@property (nonatomic, readonly) NSString *orthography;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::VocToken> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)blob;
- (void)blob:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct VocToken { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct VocToken { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)orthography;

@end
