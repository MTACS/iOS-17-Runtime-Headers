
@interface BWVideoDepthSampleBufferPropagator : BWInferenceSampleBufferPropagator <BWInferencePropagatable>

@property (nonatomic, readonly) bool allowsAsyncPropagation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsAsyncPropagation;
- (id)initWithVideoRequirements:(id)arg1 cloneRequirements:(id)arg2;

@end
