
@interface QSSBatchTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationStreamingResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSBatchTranslationResponse *contentAsQSSBatchTranslationResponse;
@property (nonatomic, readonly) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic, readonly) QSSTranslationSupportedLanguagesResponse *contentAsQSSTranslationSupportedLanguagesResponse;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::BatchTranslationStreamingResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSBatchTranslationResponse;
- (id)contentAsQSSFinalBlazarResponse;
- (id)contentAsQSSTranslationSupportedLanguagesResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
