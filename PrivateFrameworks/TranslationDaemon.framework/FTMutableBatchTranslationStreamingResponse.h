
@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property (nonatomic, copy) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (nonatomic, copy) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (nonatomic, copy) FTTranslationSupportedLanguagesResponse *contentAsFTTranslationSupportedLanguagesResponse;
@property (nonatomic) long long content_type;

+ (Class)content_mutableClassForType:(long long)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (long long)content_typeForObject:(id)arg1;

- (id)contentAsFTBatchTranslationResponse;
- (id)contentAsFTFinalBlazarResponse;
- (id)contentAsFTTranslationSupportedLanguagesResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContent:(id)arg1;
- (void)setContentAsFTBatchTranslationResponse:(id)arg1;
- (void)setContentAsFTFinalBlazarResponse:(id)arg1;
- (void)setContentAsFTTranslationSupportedLanguagesResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
