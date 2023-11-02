
@interface QSSMutableBatchRecoverStreamingRequest : QSSBatchRecoverStreamingRequest

@property (nonatomic, copy) QSSStartBatchRecoverRequest *contentAsQSSStartBatchRecoverRequest;
@property (nonatomic) long long content_type;

- (id)contentAsQSSStartBatchRecoverRequest;
- (long long)content_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setContentAsQSSStartBatchRecoverRequest:(id)arg1;
- (void)setContent_type:(long long)arg1;

@end
