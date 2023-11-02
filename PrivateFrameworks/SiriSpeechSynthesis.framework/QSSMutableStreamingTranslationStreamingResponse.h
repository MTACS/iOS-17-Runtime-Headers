
@interface QSSMutableStreamingTranslationStreamingResponse : QSSStreamingTranslationStreamingResponse

@property (nonatomic, copy) QSSTranslationResponse *contentAsQSSTranslationResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSTranslationResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSTranslationResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
