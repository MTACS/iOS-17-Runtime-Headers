
@protocol AVTDeviceResourceConsumer <NSObject>

@required

- (<AVTDeviceResourceConsumerDelegate> *)consumerDelegate;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (void)setConsumerDelegate:(id <AVTDeviceResourceConsumerDelegate>)arg1;

@end
