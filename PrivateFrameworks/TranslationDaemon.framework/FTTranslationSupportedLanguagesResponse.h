
@interface FTTranslationSupportedLanguagesResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationSupportedLanguagesResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *language_pairs;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_string;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationSupportedLanguagesResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationSupportedLanguagesResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language_pairs;
- (unsigned long long)language_pairs_count;
- (void)language_pairs_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)language_pairs_objectAtIndex:(unsigned long long)arg1;
- (id)request_id;
- (int)return_code;
- (id)return_string;

@end
