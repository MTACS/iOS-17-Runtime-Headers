
@interface QSSMutableLanguageDetectionStreamingResponse : QSSLanguageDetectionStreamingResponse

@property (nonatomic, copy) QSSLanguageDetectionResponse *contentAsQSSLanguageDetectionResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSLanguageDetectionResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSLanguageDetectionResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
