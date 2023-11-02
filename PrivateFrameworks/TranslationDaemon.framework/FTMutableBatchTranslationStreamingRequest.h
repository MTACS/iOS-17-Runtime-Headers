
@interface FTMutableBatchTranslationStreamingRequest : FTBatchTranslationStreamingRequest

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (nonatomic, copy) FTBatchTranslationLoggingRequest *contentAsFTBatchTranslationLoggingRequest;
@property (nonatomic, copy) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (nonatomic, copy) FTTranslationSupportedLanguagesRequest *contentAsFTTranslationSupportedLanguagesRequest;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTBatchTranslationFeedbackRequest;
- (id)contentAsFTBatchTranslationLoggingRequest;
- (id)contentAsFTBatchTranslationRequest;
- (id)contentAsFTTranslationSupportedLanguagesRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTBatchTranslationFeedbackRequest:(id)arg1;
- (void)setContentAsFTBatchTranslationLoggingRequest:(id)arg1;
- (void)setContentAsFTBatchTranslationRequest:(id)arg1;
- (void)setContentAsFTTranslationSupportedLanguagesRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
