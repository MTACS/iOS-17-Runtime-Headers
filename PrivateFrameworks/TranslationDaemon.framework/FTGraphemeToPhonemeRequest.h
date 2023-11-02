
@interface FTGraphemeToPhonemeRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct GraphemeToPhonemeRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTContextWithPronHints *context_with_pron_hints;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) NSString *session_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::GraphemeToPhonemeRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)context_with_pron_hints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)orthography;
- (id)session_id;

@end
