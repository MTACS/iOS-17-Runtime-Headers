
@interface QSSMutableBatchRecoverStreamingResponse : QSSBatchRecoverStreamingResponse

@property (nonatomic, copy) QSSBatchRecoverFinalResponse *contentAsQSSBatchRecoverFinalResponse;
@property (nonatomic, copy) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (nonatomic) long long content_type;

- (id)contentAsQSSBatchRecoverFinalResponse;
- (id)contentAsQSSPronGuessResponse;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSBatchRecoverFinalResponse:(id)arg1;
- (void)setContentAsQSSPronGuessResponse:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
