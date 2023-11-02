
@interface QSSTranslationSupportedLanguagesResponse_LanguagePair : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LanguagePair { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *source_locale;
@property (nonatomic, readonly) NSString *target_locale;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesResponse_::LanguagePair> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)source_locale;
- (id)target_locale;

@end
