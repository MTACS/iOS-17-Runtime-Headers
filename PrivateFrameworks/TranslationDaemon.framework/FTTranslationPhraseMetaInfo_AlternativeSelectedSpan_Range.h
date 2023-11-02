
@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct Range { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) int length;
@property (nonatomic, readonly) int start;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationPhraseMetaInfo_::AlternativeSelectedSpan_::Range> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Range { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Range { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (int)length;
- (int)start;

@end
