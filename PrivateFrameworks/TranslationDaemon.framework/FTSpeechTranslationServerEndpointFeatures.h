
@interface FTSpeechTranslationServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SpeechTranslationServerEndpointFeatures { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *conversation_id;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) FTServerEndpointFeatures *server_endpoint_features;
@property (nonatomic, readonly) NSString *source_locale;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)conversation_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationServerEndpointFeatures { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationServerEndpointFeatures { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)request_id;
- (id)server_endpoint_features;
- (id)source_locale;

@end
