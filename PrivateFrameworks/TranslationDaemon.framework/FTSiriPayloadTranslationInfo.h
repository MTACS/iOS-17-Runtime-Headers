
@interface FTSiriPayloadTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SiriPayloadTranslationInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *post_itn_payload;
@property (nonatomic, readonly) NSString *pre_itn_payload;
@property (nonatomic, readonly) FTRecognitionSausage *pre_sausage_payload;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriPayloadTranslationInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriPayloadTranslationInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)post_itn_payload;
- (id)pre_itn_payload;
- (id)pre_sausage_payload;

@end
