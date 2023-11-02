
@interface QSSMutableStreamingTranslationStreamingRequest : QSSStreamingTranslationStreamingRequest

@property (nonatomic, copy) QSSStreamingTranslationRequest *contentAsQSSStreamingTranslationRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSStreamingTranslationRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSStreamingTranslationRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
