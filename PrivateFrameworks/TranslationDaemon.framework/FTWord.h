
@interface FTWord : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct Word { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int frequency;
@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) NSData *pronunciations;
@property (nonatomic, readonly) NSString *tag;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::Word> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (int)frequency;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Word { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Word { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)orthography;
- (id)pronunciations;
- (void)pronunciations:(id /* block */)arg1;
- (id)tag;

@end
