
@interface QSSLanguageDetected : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LanguageDetected { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *detected_locale;
@property (nonatomic, readonly) NSArray *predictions;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LanguageDetected> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detected_locale;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetected { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetected { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)predictions;

@end
