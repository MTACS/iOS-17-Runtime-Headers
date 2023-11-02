
@interface QSSBatchTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct BatchTranslationStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSBatchTranslationFeedbackRequest *contentAsQSSBatchTranslationFeedbackRequest;
@property (nonatomic, readonly) QSSBatchTranslationLoggingRequest *contentAsQSSBatchTranslationLoggingRequest;
@property (nonatomic, readonly) QSSBatchTranslationRequest *contentAsQSSBatchTranslationRequest;
@property (nonatomic, readonly) QSSTranslationSupportedLanguagesRequest *contentAsQSSTranslationSupportedLanguagesRequest;
@property (nonatomic, readonly) long long content_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::BatchTranslationStreamingRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)contentAsQSSBatchTranslationFeedbackRequest;
- (id)contentAsQSSBatchTranslationLoggingRequest;
- (id)contentAsQSSBatchTranslationRequest;
- (id)contentAsQSSTranslationSupportedLanguagesRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
