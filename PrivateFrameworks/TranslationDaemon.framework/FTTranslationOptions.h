
@interface FTTranslationOptions : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationOptions { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool enable_disambiguation_alternatives;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationOptions> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable_disambiguation_alternatives;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationOptions { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationOptions { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
