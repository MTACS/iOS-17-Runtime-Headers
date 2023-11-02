
@interface QSSMutableBatchTranslationStreamingRequest : QSSBatchTranslationStreamingRequest

@property (nonatomic, copy) QSSBatchTranslationFeedbackRequest *contentAsQSSBatchTranslationFeedbackRequest;
@property (nonatomic, copy) QSSBatchTranslationLoggingRequest *contentAsQSSBatchTranslationLoggingRequest;
@property (nonatomic, copy) QSSBatchTranslationRequest *contentAsQSSBatchTranslationRequest;
@property (nonatomic, copy) QSSTranslationSupportedLanguagesRequest *contentAsQSSTranslationSupportedLanguagesRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSBatchTranslationFeedbackRequest;
- (id)contentAsQSSBatchTranslationLoggingRequest;
- (id)contentAsQSSBatchTranslationRequest;
- (id)contentAsQSSTranslationSupportedLanguagesRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSBatchTranslationFeedbackRequest:(id)arg1;
- (void)setContentAsQSSBatchTranslationLoggingRequest:(id)arg1;
- (void)setContentAsQSSBatchTranslationRequest:(id)arg1;
- (void)setContentAsQSSTranslationSupportedLanguagesRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
