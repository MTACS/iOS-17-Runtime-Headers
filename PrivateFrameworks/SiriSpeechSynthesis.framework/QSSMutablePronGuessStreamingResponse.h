
@interface QSSMutablePronGuessStreamingResponse : QSSPronGuessStreamingResponse

@property (nonatomic, copy) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSPronGuessResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSPronGuessResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
