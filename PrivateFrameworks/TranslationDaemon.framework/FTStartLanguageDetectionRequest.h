
@interface FTStartLanguageDetectionRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartLanguageDetectionRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long codec;
@property (nonatomic, readonly) NSArray *locales;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartLanguageDetectionRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartLanguageDetectionRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartLanguageDetectionRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)locales;
- (unsigned long long)locales_count;
- (void)locales_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)locales_objectAtIndex:(unsigned long long)arg1;
- (id)session_id;
- (id)speech_id;

@end
