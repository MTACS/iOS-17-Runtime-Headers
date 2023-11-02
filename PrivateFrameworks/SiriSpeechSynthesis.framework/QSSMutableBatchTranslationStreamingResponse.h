
@interface QSSMutableBatchTranslationStreamingResponse : QSSBatchTranslationStreamingResponse

@property (nonatomic, copy) QSSBatchTranslationResponse *contentAsQSSBatchTranslationResponse;
@property (nonatomic, copy) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic, copy) QSSTranslationSupportedLanguagesResponse *contentAsQSSTranslationSupportedLanguagesResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSBatchTranslationResponse;
- (id)contentAsQSSFinalBlazarResponse;
- (id)contentAsQSSTranslationSupportedLanguagesResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSBatchTranslationResponse:(id)arg1;
- (void)setContentAsQSSFinalBlazarResponse:(id)arg1;
- (void)setContentAsQSSTranslationSupportedLanguagesResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
